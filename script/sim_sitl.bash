#!/bin/bash
session="Drone"
ROS_IP="localhost"

tmux new-session -d -s $session
tmux rename-window 'SIM'
tmux send-keys "source devel/setup.bash && roslaunch blimp_description blimp_gcs.launch" C-m

tmux new-window  -t $session:1
tmux rename-window 'SITL'
tmux send-keys "./src/LibrePilot/build/firmware/fw_simposix/fw_simposix.elf 0" C-m

tmux new-window  -t $session:2
tmux rename-window 'GCS'
tmux send-keys "./src/LibrePilot/build/librepilot-gcs_release/bin/librepilot-gcs" C-m

tmux attac -t Drone