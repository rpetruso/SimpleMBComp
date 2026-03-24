/*
  ==============================================================================

    UtilityComponents.h
    Created: 24 Mar 2026 1:56:48pm
    Author:  Rob Petruso

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct Placeholder : juce::Component
{
    Placeholder();
    
    void paint(juce::Graphics& g) override;
    
    juce::Colour customColor;
};

struct RotarySlider : juce::Slider
{
    RotarySlider();
};
