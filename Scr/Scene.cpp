/**
* @file Scene.cpp
*/
#include "Scene.h"
#include <iostream>

/**
* �R���X�g���N�^
*
* @param name	�V�[����
*/
Scene::Scene(const char* name) {
	std::cout << "Scene�@�R���X�g���N�^: " << name << std::endl;
}

/**
* �f�X�g���N�^
*/
Scene::~Scene(){
	Finalize();
	std::cout << "Scene�@�f�X�g���N�^: " << name << std::endl;
}

/**
* �V�[����������Ԃɂ���
*/
void Scene::Play() {
	isActive = true;
	std::cout << "Scene�@Play: " << name << std::endl;
}

/**
* �V�[�����~��Ԃɂ���
*/
void Scene::Stop() {
	isActive = false;
	std::cout << "Scene�@Stop: " << name << std::endl;
}

/**
* �V�[����\������
*/
void Scene::Show() {
	isVisible = true;
	std::cout << "Scene�@Show: " << name << std::endl;
}

/**
* �V�[�����\���ɂ���
*/
void Scene::Hide() {
	isVisible = false;
	std::cout << "Scene�@Hide: " << name << std::endl;
}

/**
* �V�[�������擾����
*
* @return �V�[����
*/
const std::string& Scene::Name()const {
	return name;
}

/**
* �V�[���̊�����Ԃ𒲂ׂ�
*
* @retval true	�������Ă���
* @retval false	��~���Ă���
*/
bool Scene::IsActive()const {
	return isActive;
}

/**
* �V�[���̕\����Ԃ𒲂ׂ�
*
* @retval true	�\�����
* @retval false	��\�����
*/
bool Scene::IsVisible()const {
	return isVisible;
}