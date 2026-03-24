/*
  ==============================================================================

    UtilityComponents.cpp
    Created: 24 Mar 2026 1:56:48pm
    Author:  Rob Petruso

  ==============================================================================
*/

#include "UtilityComponents.h"

//==============================================================================

Placeholder::Placeholder()
{
    juce::Random r;
    customColor = juce::Colour(r.nextInt(255), r.nextInt(255), r.nextInt(255));
}

void Placeholder::paint(juce::Graphics& g)
{
    g.fillAll(customColor);
}

RotarySlider::RotarySlider() :
juce::Slider(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag,
             juce::Slider::TextEntryBoxPosition::NoTextBox)
{}
