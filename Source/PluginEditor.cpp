/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
HurdygurdyAudioProcessorEditor::HurdygurdyAudioProcessorEditor (HurdygurdyAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.

    addAndMakeVisible(gsharp3Btn);
    addAndMakeVisible(a4Btn);
    addAndMakeVisible(asharp4Btn);
    addAndMakeVisible(b4Btn);
    addAndMakeVisible(c4Btn);
    addAndMakeVisible(csharp4Btn);
    addAndMakeVisible(d4Btn);
    addAndMakeVisible(dsharp4Btn);
    addAndMakeVisible(e4Btn);
    addAndMakeVisible(f4Btn);
    addAndMakeVisible(fsharp4Btn);
    addAndMakeVisible(g4Btn);
    addAndMakeVisible(gsharp4Btn);
    addAndMakeVisible(a5Btn);
    addAndMakeVisible(asharp5Btn);
    addAndMakeVisible(b5Btn);
    addAndMakeVisible(c5Btn);
    addAndMakeVisible(csharp5Btn);
    addAndMakeVisible(d5Btn);
    addAndMakeVisible(dsharp5Btn);
    addAndMakeVisible(e5Btn);
    addAndMakeVisible(f5Btn);
    addAndMakeVisible(fsharp5Btn);
    addAndMakeVisible(g5Btn);
    gsharp3Btn.setButtonText("G#");
    a4Btn.setButtonText("A");
    asharp4Btn.setButtonText("A#");
    b4Btn.setButtonText("B");
    c4Btn.setButtonText("C");
    csharp4Btn.setButtonText("C#");
    d4Btn.setButtonText("D");
    dsharp4Btn.setButtonText("D#");
    e4Btn.setButtonText("E");
    f4Btn.setButtonText("F");
    fsharp4Btn.setButtonText("F#");
    g4Btn.setButtonText("G");
    gsharp4Btn.setButtonText("G#");
    a5Btn.setButtonText("A");
    asharp5Btn.setButtonText("A#");
    b5Btn.setButtonText("B");
    c5Btn.setButtonText("C");
    csharp5Btn.setButtonText("C#");
    d5Btn.setButtonText("D");
    dsharp5Btn.setButtonText("D#");
    e5Btn.setButtonText("E");
    f5Btn.setButtonText("F");
    fsharp5Btn.setButtonText("F#");
    g5Btn.setButtonText("G");

    setSize (400, 400);
}

HurdygurdyAudioProcessorEditor::~HurdygurdyAudioProcessorEditor()
{
}

//==============================================================================
void HurdygurdyAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (juce::FontOptions (15.0f));
}

void HurdygurdyAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

    gsharp3Btn.setBounds(0, 0, 50, 30);
    a4Btn.setBounds(0, 0, 50, 30);
    asharp4Btn.setBounds(0, 0, 50, 30);
    b4Btn.setBounds(0, 0, 50, 30);
    c4Btn.setBounds(0, 0, 50, 30);
    csharp4Btn.setBounds(0, 0, 50, 30);
    d4Btn.setBounds(0, 0, 50, 30);
    dsharp4Btn.setBounds(0, 0, 50, 30);
    e4Btn.setBounds(0, 0, 50, 30);
    f4Btn.setBounds(0, 0, 50, 30);
    fsharp4Btn.setBounds(0, 0, 50, 30);
    g4Btn.setBounds(0, 0, 50, 30);
    gsharp4Btn.setBounds(0, 0, 50, 30);
    a5Btn.setBounds(0, 0, 50, 30);
    asharp5Btn.setBounds(0, 0, 50, 30);
    b5Btn.setBounds(0, 0, 50, 30);
    c5Btn.setBounds(0, 0, 50, 30);
    csharp5Btn.setBounds(0, 0, 50, 30);
    d5Btn.setBounds(0, 0, 50, 30);
    dsharp5Btn.setBounds(0, 0, 50, 30);
    e5Btn.setBounds(0, 0, 50, 30);
    f5Btn.setBounds(0, 0, 50, 30);
    fsharp5Btn.setBounds(0, 0, 50, 30);
    g5Btn.setBounds(0, 0, 50, 30);
}
