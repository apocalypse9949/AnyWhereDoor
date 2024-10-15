#!/bin/bash

echo "Installing dependencies for Demon worm..."

if [ -x "$(command -v apt)" ]; then
    sudo apt update
    sudo apt install -y libssh-dev
elif [ -x "$(command -v yum)" ]; then
    sudo yum install -y libssh-devel
else
    echo "Package manager not supported. Install libssh manually."
fi

echo "Dependencies installed!"
