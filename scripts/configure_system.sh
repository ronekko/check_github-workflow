#!/usr/bin/env bash

set -ex

# echo "net.ipv4.tcp_syn_retries=1" | sudo tee -a /etc/sysctl.conf
# sudo sysctl -p

sysctl net.ipv4.tcp_keepalive_time
sysctl net.ipv4.tcp_keepalive_intvl
sysctl net.ipv4.tcp_keepalive_probes
sysctl net.ipv4.tcp_fin_timeout
sysctl net.ipv4.tcp_syn_retries
sysctl net.ipv4.tcp_synack_retries
