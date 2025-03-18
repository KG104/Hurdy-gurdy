/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class HurdygurdyAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    HurdygurdyAudioProcessorEditor (HurdygurdyAudioProcessor&);
    ~HurdygurdyAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    HurdygurdyAudioProcessor& audioProcessor;

    juce::TextButton gsharp3Btn;
    juce::TextButton a4Btn;
    juce::TextButton asharp4Btn;
    juce::TextButton b4Btn;
    juce::TextButton c4Btn;
    juce::TextButton csharp4Btn;
    juce::TextButton d4Btn;
    juce::TextButton dsharp4Btn;
    juce::TextButton e4Btn;
    juce::TextButton f4Btn;
    juce::TextButton fsharp4Btn;
    juce::TextButton g4Btn;
    juce::TextButton gsharp4Btn;
    juce::TextButton a5Btn;
    juce::TextButton asharp5Btn;
    juce::TextButton b5Btn;
    juce::TextButton c5Btn;
    juce::TextButton csharp5Btn;
    juce::TextButton d5Btn;
    juce::TextButton dsharp5Btn;
    juce::TextButton e5Btn;
    juce::TextButton f5Btn;
    juce::TextButton fsharp5Btn;
    juce::TextButton g5Btn;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HurdygurdyAudioProcessorEditor)
};
