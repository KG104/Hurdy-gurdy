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

    gsharp3Btn.setButtonText("G#");
    a3Btn.setButtonText("A");
    asharp3Btn.setButtonText("A#");
    b3Btn.setButtonText("B");
    c4Btn.setButtonText("C");
    csharp4Btn.setButtonText("C#");
    d4Btn.setButtonText("D");
    dsharp4Btn.setButtonText("D#");
    e4Btn.setButtonText("E");
    f4Btn.setButtonText("F");
    fsharp4Btn.setButtonText("F#");
    g4Btn.setButtonText("G");
    gsharp4Btn.setButtonText("G#");
    a4Btn.setButtonText("A");
    asharp4Btn.setButtonText("A#");
    b4Btn.setButtonText("B");
    c5Btn.setButtonText("C");
    csharp5Btn.setButtonText("C#");
    d5Btn.setButtonText("D");
    dsharp5Btn.setButtonText("D#");
    e5Btn.setButtonText("E");
    f5Btn.setButtonText("F");
    g5Btn.setButtonText("G");

    gsharp3Btn.addListener(this);
    a3Btn.addListener(this);
    asharp3Btn.addListener(this);
    b3Btn.addListener(this);
    c4Btn.addListener(this);
    csharp4Btn.addListener(this);
    d4Btn.addListener(this);
    dsharp4Btn.addListener(this);
    e4Btn.addListener(this);
    f4Btn.addListener(this);
    fsharp4Btn.addListener(this);
    g4Btn.addListener(this);
    gsharp4Btn.addListener(this);
    a4Btn.addListener(this);
    asharp4Btn.addListener(this);
    b4Btn.addListener(this);
    c5Btn.addListener(this);
    csharp5Btn.addListener(this);
    d5Btn.addListener(this);
    dsharp5Btn.addListener(this);
    e5Btn.addListener(this);
    f5Btn.addListener(this);
    g5Btn.addListener(this);

    addAndMakeVisible(gsharp3Btn);
    addAndMakeVisible(a3Btn);
    addAndMakeVisible(asharp3Btn);
    addAndMakeVisible(b3Btn);
    addAndMakeVisible(c4Btn);
    addAndMakeVisible(csharp4Btn);
    addAndMakeVisible(d4Btn);
    addAndMakeVisible(dsharp4Btn);
    addAndMakeVisible(e4Btn);
    addAndMakeVisible(f4Btn);
    addAndMakeVisible(fsharp4Btn);
    addAndMakeVisible(g4Btn);
    addAndMakeVisible(gsharp4Btn);
    addAndMakeVisible(a4Btn);
    addAndMakeVisible(asharp4Btn);
    addAndMakeVisible(b4Btn);
    addAndMakeVisible(c5Btn);
    addAndMakeVisible(csharp5Btn);
    addAndMakeVisible(d5Btn);
    addAndMakeVisible(dsharp5Btn);
    addAndMakeVisible(e5Btn);
    addAndMakeVisible(f5Btn);
    addAndMakeVisible(g5Btn);

    setSize (920, 80);
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

    gsharp3Btn.setBounds(0, 0, 40, 40);
    a3Btn.setBounds(40, 40, 40, 40);
    asharp3Btn.setBounds(80, 0, 40, 40);
    b3Btn.setBounds(120, 40, 40, 40);
    c4Btn.setBounds(160, 40, 40, 40);
    csharp4Btn.setBounds(200, 0, 40, 40);
    d4Btn.setBounds(240, 40, 40, 40);
    dsharp4Btn.setBounds(280, 0, 40, 40);
    e4Btn.setBounds(320, 40, 40, 40);
    f4Btn.setBounds(360, 40, 40, 40);
    fsharp4Btn.setBounds(400, 0, 40, 40);
    g4Btn.setBounds(440, 40, 40, 40);
    gsharp4Btn.setBounds(480, 0, 40, 40);
    a4Btn.setBounds(520, 40, 40, 40);
    asharp4Btn.setBounds(560, 0, 40, 40);
    b4Btn.setBounds(600, 40, 40, 40);
    c5Btn.setBounds(640, 40, 40, 40);
    csharp5Btn.setBounds(680, 0, 40, 40);
    d5Btn.setBounds(720, 40, 40, 40);
    dsharp5Btn.setBounds(760, 0, 40, 40);
    e5Btn.setBounds(800, 40, 40, 40);
    f5Btn.setBounds(840, 0, 40, 40);
    g5Btn.setBounds(880, 40, 40, 40);
}

void HurdygurdyAudioProcessorEditor::buttonClicked (juce::Button* button) {
    if (button == &gsharp3Btn) {
      printf("g#3\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 68, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &a3Btn) {
      printf("a3\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 69, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &asharp3Btn) {
      printf("a#3\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 70, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &b3Btn) {
      printf("b3\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 71, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &c4Btn) {
      printf("c4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 72, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &csharp4Btn) {
      printf("c#4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 73, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &d4Btn) {
      printf("d4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 74, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &dsharp4Btn) {
      printf("d#4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 75, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &e4Btn) {
      printf("e4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 76, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &f4Btn) {
      printf("f4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 77, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &fsharp4Btn) {
      printf("f#4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 78, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &g4Btn) {
      printf("g4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 79, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &gsharp4Btn) {
      printf("g#4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 80, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &a4Btn) {
      printf("a4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 81, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &asharp4Btn) {
      printf("a#4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 82, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &b4Btn) {
      printf("b4\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 83, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &c5Btn) {
      printf("c5\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 84, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &csharp5Btn) {
      printf("c#5\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 85, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &d5Btn) {
      printf("d5\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 86, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &dsharp5Btn) {
      printf("d#5\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 87, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &e5Btn) {
      printf("e5\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 88, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &f5Btn) {
      printf("f5\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 89, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
    else if (button == &g5Btn) {
      printf("g5\n");
      juce::MidiMessage message = juce::MidiMessage::noteOn (1, 91, (juce::uint8) 127);
      juce::MidiBuffer buffer;
      buffer.addEvent (message, 0);
      audioProcessor.addMidiBufferToProcess (buffer);
    }
}
