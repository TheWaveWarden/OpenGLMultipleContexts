# Deadlock Demo

Demos two `juce::OpenGLContext` being run in parallel with two `juce::OpenGLRenderer`s. Do the following steps to get the deadlock:

- open Standalone build
- close Standalone build
- you are now in a DeadLock


Testing environment:
- Ubuntu 18.04
- JUCE 6.1.0