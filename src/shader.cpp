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
get_shader( )
{
	return id_ ;
}

bool 
shader::
load_shader( std::string name , shader_type type)
{
	
	std::fstream file;
	file.open( SHADER_DIR + name , std::ios_base::in );
	if ( !file.is_open() )
	{
		//log( "Error opening shader file" ) ;
		return false;
	}
	name_ = name ;

	std::stringstream buffer ;
	buffer << file.rdbuf() ;
	std::string program_str = buffer.str() ;
	//std::cout << program_str << std::endl;
	const char * source = program_str.c_str() ;

	if ( type == shader_type::fragment_shader)
		id_ = glCreateShader( GL_FRAGMENT_SHADER ) ;
	else if (type == shader_type::vertex_shader)
		id_ = glCreateShader( GL_VERTEX_SHADER ) ;
	glShaderSource(id_ , 1 , &source , NULL) ;
	glCompileShader( id_ ) ;	


		

	GLint isCompiled = 0;
	glGetShaderiv(id_, GL_COMPILE_STATUS, &isCompiled);
	if(isCompiled == GL_FALSE)
	{
		std::cout << "error compiling shader named " + name << std::endl;
		GLint maxLength = 0;
		glGetShaderiv(id_, GL_INFO_LOG_LENGTH, &maxLength);

		// The maxLength includes the NULL character
		std::vector<GLchar> errorLog(maxLength);
		glGetShaderInfoLog(id_, maxLength, &maxLength, &errorLog[0]);

		std::string error_str(errorLog.begin() , errorLog.end()) ;

		std::cout << error_str << std::endl;
		// Provide the infolog in whatever manor you deem best.
		// Exit with failure.
		glDeleteShader(id_); // Don't leak the shader.
		return false;
	}
	
}
