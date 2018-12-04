#include "Geometry.h"
#include "Ray.h"

Geometry::Geometry()
{

}

// Need three functions:
glm::vec3 Geometry::ClosestPoint(std::shared_ptr<Ray> _ray, glm::vec3 _query)
{
// Function to get the closest point on a line.
// Takes a ray, a 3D query point, returns a 3D point.
// Can express the closest point (X) on the line to a query point (P) as:
// X = a+((P-a).n)n
// The vector from X to P is:
// P - X
// Can take the radius(R) of the sphere.
//
// If ||P - X|| <= R  --- The || means the length, magnitude or norm of a vector.
//		Ray intersects with the sphere.
// Else
//		Ray does not intersect with the sphere.


	return _query;
}





// Function to calculate Ray-sphere intersection.
// Takes a ray, sphere centre, and radius. Returns whether it hit or not, and distance to hit.
// (use a stucture or class to combine these potentially)
// Ray-Sphere needs to:
// First, check if ray origin is inside the sphere.
// (if it is, treat as an error and say there is not intersection).
// Then, find the closest point on the ray to the centre of the sphere. (Use function above).
// Check if the closest point is in front of or behind the ray's origin/direction.
// (reject if intersection is behind the ray's origin and direction points away from it).
// (prevents drawing objects that are behind the camera).
// Work out the distance from the closest point on the line to the sphere's centre.
// Perform the three checks.
// (work out and return actual intersection points).



// Function to get the normal of a sphere
// Takes a sphere centre and a 3D sample point. Returns a 3D direction vector.
// For lighting calculations, we will need the surface normal.
// The intersection point is at the surface of the sphere.
// Generate surface normal at the intersection point.

// Basic diffuse light equation:
// L = (Wi . N)Li Kd
// Need a surface normal(N) and a vector pointing toward the light source(Wi)
// Simplest treatment of Wi is to set it as a constant value
// Could call this a 'distant' light, all the light rays are parallel.
// (makes sure the result of the dot project is always >= 0).