#!/bin/sh
git status --ignored -s | grep "\!\!" | cut --delimiter=" " -f 2
