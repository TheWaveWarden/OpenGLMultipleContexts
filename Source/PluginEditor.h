#pragma once

#include "PluginProcessor.h"
#include <JuceHeader.h>
#include "OpenGLComponent.h"

class OpenGLMultipleContextsAudioProcessorEditor
    : public juce::AudioProcessorEditor {
public:
  OpenGLMultipleContextsAudioProcessorEditor(
      OpenGLMultipleContextsAudioProcessor &);
  ~OpenGLMultipleContextsAudioProcessorEditor() override;

  void paint(juce::Graphics &) override;
  void resized() override;

private:
  OpenGLComponent m_left;
  OpenGLComponent m_right; 

  OpenGLMultipleContextsAudioProcessor &audioProcessor;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(
      OpenGLMultipleContextsAudioProcessorEditor)
};
