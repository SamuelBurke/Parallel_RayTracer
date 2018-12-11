#ifndef RAYTRACER_H
#define RAYTRACER_H

#include <glm/glm.hpp>
#include <memory>
#include <vector>

//class Object;
class Sphere;
class Ray;
class Geometry;
// Keeps track of all objects in the scene.
// Routine 'trace ray' test ray against all objects in scene, returns pixel colour.
class RayTracer
{
public:
	RayTracer();

	glm::vec3 TraceRay(std::shared_ptr<Ray> _ray);
	void ClampColour(glm::vec3 &_col);

	void AddObject(std::shared_ptr<Sphere> _object);

	void Debug();

private:
	std::vector<std::shared_ptr<Sphere>> m_objects;

	std::shared_ptr<Geometry> m_geometry;

	float m_blue;

	int m_primaryRay;
};

#endif // !RAYTRACER_H
