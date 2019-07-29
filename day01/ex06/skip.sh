#!/bin/sh

ls -l | sed n\;g | tr -s "\n"
