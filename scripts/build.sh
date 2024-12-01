#!/usr/bin/env bash

set -ex

cmake -H. -Bbuild && make -C build
