#include "geometryPrimitive.h"

GeometryPrimitive::GeometryPrimitive(std::string p_type) : m_type(p_type)
{
	
}

void GeometryPrimitive::setup()
{
	if (m_type == "sphere") {
		setupSphere(100);
	}
	else if (m_type == "cube") {
		setupCube(150);
	}
	else if (m_type == "cylinder") {
		setupCylinder(100, 200);
	}
	else if (m_type == "cone") {
		setupCone(100, 200);
	}
	else {
		
	}
}

void GeometryPrimitive::draw()
{
	mesh.draw();
}

void GeometryPrimitive::setupTetrahedron(float width)
{
	//Initialisation du tetrah�dre
	width = width / 2;
	mesh.clear();
	ofFill();
	ofSetColor(0, 0, 0, 0.4);
	mesh.addVertex(ofPoint(width, width, width));
	mesh.addVertex(ofPoint(-width, -width, width));
	mesh.addVertex(ofPoint(-width, width, -width));
	mesh.addVertex(ofPoint(width, -width, -width));
}

void GeometryPrimitive::setupCube(float width)
{
	//Position, rayon et couleur initiaux du cube
	mesh.clear();
	cube.set(width);
	ofFill();
	ofSetColor(0, 0, 0, 0.4);
	cube.setPosition(0, 0, 0);
	mesh = cube.getMesh();
	
}

void GeometryPrimitive::setupOctahedron(float width)
{
	//Initialisation do l'octoh�dre
	width = width/2;
	mesh.clear();
	ofFill();
	ofSetColor(0, 0, 0, 0.4);
	mesh.addVertex(ofPoint(width, 0, 0));
	mesh.addVertex(ofPoint(0, width, 0));
	mesh.addVertex(ofPoint(0, 0, width));
	mesh.addVertex(ofPoint(-width, 0, 0));
	mesh.addVertex(ofPoint(0, -width, 0));
	mesh.addVertex(ofPoint(0, 0, -width));

}

void GeometryPrimitive::setupDodecahedron(float width)
{
	//Initialisation du dod�cah�dre
	width = width / 2;
	float l1 = 0.525731*width;
	float l2 = 0.850650*width;
	mesh.clear();
	ofFill();
	ofSetColor(0, 0, 0, 0.4);
	mesh.addVertex(ofPoint(0, l2, l1));
	mesh.addVertex(ofPoint(0, l2, -l1));
	mesh.addVertex(ofPoint(0, -l2, l1));
	mesh.addVertex(ofPoint(0, -l2, -l1));
	mesh.addVertex(ofPoint(l1, 0, l2));
	mesh.addVertex(ofPoint(l1, 0, -l2));
	mesh.addVertex(ofPoint(-l1, 0, l2));
	mesh.addVertex(ofPoint(-l1, 0, -l2));
	mesh.addVertex(ofPoint(l2, l1, 0));
	mesh.addVertex(ofPoint(l2, -l1, 0));
	mesh.addVertex(ofPoint(-l2, l1, -0));
	mesh.addVertex(ofPoint(-l2, -l1, 0));
	mesh.addVertex(ofPoint(width, width, width));
	mesh.addVertex(ofPoint(width, width, -width));
	mesh.addVertex(ofPoint(width, -width, width));
	mesh.addVertex(ofPoint(width, -width, -width));
	mesh.addVertex(ofPoint(-width, width, width));
	mesh.addVertex(ofPoint(-width, width, -width));
	mesh.addVertex(ofPoint(-width, -width, width));
	mesh.addVertex(ofPoint(-width, -width, -width));
}

void GeometryPrimitive::setupIcosahedron(float width)
{
	//Initialisation de l'icosah�dre
	width = width / 2;
	float l1 = 1.618033*width;
	float l2 = 0.618033*width;
	mesh.clear();
	ofFill();
	ofSetColor(0, 0, 0, 0.4);
	mesh.addVertex(ofPoint(-l1, 0, l2));
	mesh.addVertex(ofPoint(l1, 0, l2));
	mesh.addVertex(ofPoint(-l1, 0, -l2));
	mesh.addVertex(ofPoint(l1, 0, -l2));
	mesh.addVertex(ofPoint(0, l2, l1));
	mesh.addVertex(ofPoint(0, l2, -l1));
	mesh.addVertex(ofPoint(0, -l2, l1));
	mesh.addVertex(ofPoint(0, -l2, -l1));
	mesh.addVertex(ofPoint(l2, l1, 0));
	mesh.addVertex(ofPoint(-l2, l1, 0));
	mesh.addVertex(ofPoint(l2, -l1, -0));
	mesh.addVertex(ofPoint(-l2, -l1, 0));
}

void GeometryPrimitive::setupSphere(float radius)
{
	//Initialisation de la sph�re
	mesh.clear();
	sphere.setRadius(radius);
	ofSetSphereResolution(24);
	ofFill();
	ofSetColor(0, 0, 0, 0.4);
	sphere.setPosition(0, 0, 0);
	mesh = sphere.getMesh();
}

void GeometryPrimitive::setupCylinder(float radius, float height)
{
	//Initialisation du cylindre
	mesh.clear();
	cylinder.set(radius, height);
	ofFill();
	ofSetColor(0, 0, 0, 0.4);
	cylinder.setPosition(0, 0, 0);
	mesh = cylinder.getCylinderMesh();
}

void GeometryPrimitive::setupCone(float radius, float height)
{
	//Initialisation du cone
	mesh.clear();
	cone.set(radius, height);
	ofFill();
	ofSetColor(0, 0, 0, 0.4);
	cone.setPosition(0, 0, 0);
	mesh = cone.getConeMesh();
}

void GeometryPrimitive::rotateX() {
}

void GeometryPrimitive::rotateY() {
}

void GeometryPrimitive::rotateZ() {
}

void GeometryPrimitive::translateX() {
}

void GeometryPrimitive::translateY() {
}

void GeometryPrimitive::translateZ() {
}

void GeometryPrimitive::scale() {
}

std::string GeometryPrimitive::id() {
	return "Foo";
}