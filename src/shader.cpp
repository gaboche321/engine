#include <shader.hpp>
#include <vector>


shader::
shader()
{}

shader::
~shader()
{}

GLuint 
shader::
get_program( )
{
	return id_ ;
}

GLuint 
shader::
create_program( std::string vs_name , std::string fs_name )
{
	GLuint vs = load_shader( vs_name , shader_type::vertex_shader ) ;
	GLuint fs = load_shader( fs_name , shader_type::fragment_shader ) ;

	id_ = glCreateProgram();
	glAttachShader( id_, vs );
	glAttachShader( id_, fs );
	glLinkProgram( id_ ) ;

	GLint isLinked = 0;
	glGetProgramiv(id_, GL_LINK_STATUS, &isLinked);
	if(isLinked == GL_FALSE)
	{
		std::cout << "error linking program" << std::endl;
		GLint maxLength = 0;
		glGetProgramiv(id_, GL_INFO_LOG_LENGTH, &maxLength);

		// The maxLength includes the NULL character
		std::vector<GLchar> errorLog(maxLength);
		glGetShaderInfoLog(id_, maxLength, &maxLength, &errorLog[0]);

		std::string error_str(errorLog.begin() , errorLog.end()) ;

		std::cout << error_str << std::endl;
		// Provide the infolog in whatever manor you deem best.
		// Exit with failure.
		glDeleteProgram(id_); // Don't leak the shader.
	}
}

GLuint 
shader::
load_shader( std::string name , shader_type type)
{
	GLuint id;

	std::fstream file;
	file.open( SHADER_DIR + name , std::ios_base::in );
	if ( !file.is_open() )
	{
		//log( "Error opening shader file" ) ;
		return false;
	}

	std::stringstream buffer ;
	buffer << file.rdbuf() ;
	std::string program_str = buffer.str() ;
	//std::cout << program_str << std::endl;
	const char * source = program_str.c_str() ;

	if ( type == shader_type::fragment_shader)
		id = glCreateShader( GL_FRAGMENT_SHADER ) ;
	else if (type == shader_type::vertex_shader)
		id = glCreateShader( GL_VERTEX_SHADER ) ;
	glShaderSource(id , 1 , &source , NULL) ;
	glCompileShader( id ) ;	

	GLint isCompiled = 0;
	glGetShaderiv(id, GL_COMPILE_STATUS, &isCompiled);
	if(isCompiled == GL_FALSE)
	{
		std::cout << "error compiling shader named " + name << std::endl;
		GLint maxLength = 0;
		glGetShaderiv(id, GL_INFO_LOG_LENGTH, &maxLength);

		// The maxLength includes the NULL character
		std::vector<GLchar> errorLog(maxLength);
		glGetShaderInfoLog(id, maxLength, &maxLength, &errorLog[0]);

		std::string error_str(errorLog.begin() , errorLog.end()) ;

		std::cout << error_str << std::endl;
		// Provide the infolog in whatever manor you deem best.
		// Exit with failure.
		glDeleteShader(id); // Don't leak the shader.
		return -1;
	}

	return id ;
}
	
void 
shader::
set_uniform_mat4( std::string uniform , glm::mat4 mat )
{
	GLuint MatrixID = glGetUniformLocation( id_ , uniform.c_str() ) ;
	glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &mat[0][0]);
}