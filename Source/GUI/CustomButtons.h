/*
  ==============================================================================

    CustomButtons.h
    Created: 24 Mar 2026 1:48:41pm
    Author:  Rob Petruso

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct PowerButton : juce::ToggleButton { };

struct AnalyzerButton : juce::ToggleButton
{
    void resized() override;
   
    juce::Path randomPath;
};
