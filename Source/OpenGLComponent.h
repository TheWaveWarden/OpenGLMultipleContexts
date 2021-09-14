
#pragma once

#include <JuceHeader.h>

using namespace juce::gl;

class OpenGLComponent : public juce::Component, public juce::OpenGLRenderer {
public:
	OpenGLComponent();
	~OpenGLComponent();

	void paint(juce::Graphics &) override;
	void resized() override;

	void newOpenGLContextCreated() override;
	void renderOpenGL() override;
	void openGLContextClosing() override;

private:
	juce::OpenGLContext m_openGL;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(OpenGLComponent)
};
