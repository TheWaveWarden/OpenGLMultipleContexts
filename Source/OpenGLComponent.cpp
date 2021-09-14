#include "OpenGLComponent.h"

OpenGLComponent::OpenGLComponent() {
	setOpaque(true);

	m_openGL.setRenderer(this);
	m_openGL.setContinuousRepainting(true);

	m_openGL.attachTo(*this);
}

OpenGLComponent::~OpenGLComponent() {
	m_openGL.detach();
}

void OpenGLComponent::paint(juce::Graphics &g) {
}

void OpenGLComponent::resized() {
}

void OpenGLComponent::newOpenGLContextCreated() {
}

void OpenGLComponent::renderOpenGL() {
}

void OpenGLComponent::openGLContextClosing() {
}