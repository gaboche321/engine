#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <game_object.hpp>


class camera : public game_object
{
public:
	camera();
	~camera();

	glm::mat4 get_view_matrix();
};

#endif