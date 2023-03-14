#!/bin/bash
xhost +si:localuser:$USER
xhost +local:docker

cd docker && docker-compose up