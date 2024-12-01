#!/usr/bin/env bash

set -ex

sudo apt update
sudo apt install -y \
    build-essential \
    lld \
    cmake \
    git \
    wget \
    curl \
    software-properties-common

sudo pip install cmake
