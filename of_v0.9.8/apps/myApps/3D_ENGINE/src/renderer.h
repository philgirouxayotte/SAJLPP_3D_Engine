#pragma once

#include <vector>
#include "ofMain.h"
#include "particleCloud.h"
#include "drawing.h"
#include "imageObjet.h"

class Renderer
{
public:

	ofFbo fbo;
	
	Renderer();
		

	void setup();
	void update();
	void draw();

	//getters
	std::vector<GeometryObject*>* getObjects();
	int getNumberOfObjects();

	//geometryTools
	bool line;
	bool triangle;
	bool circle;

	int xMouseCurrent;
	int yMouseCurrent;

	void renderParticleCloud();

	void drawLine(float x1, float y1, float x2, float y2);
	void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3);
	void drawCircle(float x1, float y1, float x2, float y2);
	void renderDrawing();
	void saveDrawing();

	//imageTools
	void renderImage(ofImage* image, string nom, int x, int y, int z);
	void renderImage(ofImage* image, string nom, int x, int y, int z, ofColor couleur);
	void renderImage(ofImage* image, string nom, int x, int y, int z, ofImage* image1);
	void exporter();
	ofVec3f convertionRGB_HSV(ofColor couleur);

	//transformationTools
	void renderTransformation();
	ofEasyCam cam;

	~Renderer();

private:
	//geometryObject container
	std::vector<GeometryObject*> geometryObjectContainer;
	Drawing* drawing;
	bool drawingToolActivated;
};
