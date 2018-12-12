#ifndef SPHERE_H
#define SPHERE_H

#include "Object.h"

#include <glm/glm.hpp>
#include <memory>

class Ray;
class RayTracer;

class Sphere : public Object
{
public:
	Sphere();

	glm::vec3 Shade(std::shared_ptr<Ray> _ray, RayTracer& _rayTracer, glm::vec3(_intersection), int _count);

	void SetPosition(glm::vec3 _position);
	void SetRadius(float _radius);
	void SetColour(glm::vec3 _colour);

	glm::vec3 GetPosition();
	float GetRadius();
	glm::vec3 GetColour();

	glm::vec3 GetNormal(glm::vec3 _pi);

private:
	glm::vec3 mPosition;
	float mRadius;
	glm::vec3 mColour;
};

#endif // !SPHERE_H
