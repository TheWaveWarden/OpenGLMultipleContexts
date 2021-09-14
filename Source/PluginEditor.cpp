#include "PluginEditor.h"
#include "PluginProcessor.h"

//==============================================================================
OpenGLMultipleContextsAudioProcessorEditor::
    OpenGLMultipleContextsAudioProcessorEditor(
        OpenGLMultipleContextsAudioProcessor &p)
    : AudioProcessorEditor(&p), audioProcessor(p) {
  setSize(600, 400);

  addAndMakeVisible(m_left);
  addAndMakeVisible(m_right);

  m_left.setBoundsRelative(0, 0, 0.45f, 1.f);
  m_right.setBoundsRelative(0.55f, 0, 0.45f, 1.f);
}

OpenGLMultipleContextsAudioProcessorEditor::
    ~OpenGLMultipleContextsAudioProcessorEditor() {}

void OpenGLMultipleContextsAudioProcessorEditor::paint(juce::Graphics &g) {}

void OpenGLMultipleContextsAudioProcessorEditor::resized() {
  
}
