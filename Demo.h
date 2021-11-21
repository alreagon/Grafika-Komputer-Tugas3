#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, cube_texture2, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2, stexture3, cubeVBO2, cubeVAO2, cubeEBO2, cubeVBO3, cubeVAO3, cubeEBO3, cube_texture3, stexturePlane;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);

	void BuildTexturedCube();
	void BuildTexturedCube2();
	void BuildTexturedCube3();

	void DrawTexturedCube();
	void DrawTexturedCube2();
	void DrawTexturedCube3();

	void BuildTexturedPlane();
	void DrawTexturedPlane();

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

