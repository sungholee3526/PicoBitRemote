# PicoBitRemote

## Hardware

### Modified USB hub

Controls power to port 0 and port 1.
A USB hub that supports PPPS(Per-Port-Power-Switching) could've been used but I couldn't find any around me.

Based on Arduino Leonardo compatible board and a IRF7316(dual P-ch MOSFET).

- USB port 0: Controlled with D10
- USB port 1: Contolled with D9
