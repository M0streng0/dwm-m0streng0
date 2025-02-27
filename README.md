# My DWM Configuration

This repository contains my customized configuration for `dwm`, `dwmblocks`, `slock`, and `st`. It includes various patches to enhance functionality and usability, based on `dwm-flexipatch`, `slock-flexipatch`, `st-flexipatch`, and `dwmblocks-async`.

## Overview

### DWM (Dynamic Window Manager)

This configuration is built on top of [dwm-flexipatch](https://github.com/bakkeby/dwm-flexipatch), a variant of `dwm` that uses preprocessor directives to manage patches, simplifying the process of customizing `dwm`. Unlike the original `dwm`, which requires manual patching, `dwm-flexipatch` allows for easier integration of multiple patches without conflicts.

### DWM Blocks

For the status bar, I use [dwmblocks-async](https://github.com/UtkarshVerma/dwmblocks-async), an enhanced version of the original `dwmblocks` that supports asynchronous updates, improving performance and responsiveness.

### Slock (Simple X display locker)

My setup is based on [slock-flexipatch](https://github.com/bakkeby/slock-flexipatch), which, like `dwm-flexipatch`, uses preprocessor directives for easier patch management.

### ST (Simple Terminal)

This repository includes my configuration for [st-flexipatch](https://github.com/bakkeby/st-flexipatch), providing a flexible and easily customizable terminal.

## Applied Patches

### DWM Patches

- **BAR_DWMBLOCKS_PATCH**: Integration with `dwmblocks` for a modular status bar.
- **BAR_LTSYMBOL_PATCH**: Adds layout symbols to the status bar.
- **BAR_STATUS_PATCH**: Enables a status bar for system information.
- **BAR_STATUSCMD_PATCH**: Allows executing commands from the status bar.
- **BAR_STATUS2D_PATCH**: Adds colored status text.
- **BAR_SYSTRAY_PATCH**: System tray support in the status bar.
- **BAR_TAGS_PATCH**: Enhances tag display in the status bar.
- **BAR_WINTITLE_PATCH**: Window titles in the status bar.
- **BAR_CENTEREDWINDOWNAME_PATCH**: Centers window names in the status bar.
- **ALWAYSCENTER_PATCH**: Centers floating windows.
- **FAKEFULLSCREEN_CLIENT_PATCH**: Allows fake fullscreen for clients.
- **SWALLOW_PATCH**: Swallows terminals to avoid clutter.
- **TOGGLEFULLSCREEN_PATCH**: Toggle fullscreen mode.
- **VANITYGAPS_PATCH**: Adds gaps between windows.
- **WARP_PATCH**: Warps the mouse to the center of the focused window.
- **TILE_LAYOUT**: Tiling layout.
- **MONOCLE_LAYOUT**: Monocle layout.
- **WINDOWROLERULE_PATCH**: Allows the use of WM_WINDOW_ROLE(STRING) properties.

### Slock Patches

- **CAPSCOLOR_PATCH**: Changes color when Caps Lock is active.
- **DPMS_PATCH**: Enables DPMS (Energy Star) features.
- **DWM_LOGO_PATCH**: Displays the `dwm` logo.
- **FAILURE_COMMAND_PATCH**: Executes a command on failed unlock attempts.
- **MEDIAKEYS_PATCH**: Support for media keys.

### ST Patches

- **BLINKING_CURSOR_PATCH**: Blinking cursor support.
- **BOLD_IS_NOT_BRIGHT_PATCH**: Renders bold text as bold without altering the color.
- **BOXDRAW_PATCH**: Box drawing support.
- **COLUMNS_PATCH**: Prevents text from being cut off when the terminal is resized.
- **DELKEY_PATCH**: Del key support.
- **DYNAMIC_CURSOR_COLOR_PATCH**: Makes the cursor color the inverse of the current cell color.
- **LIGATURES_PATCH**: Support for ligatures.
- **NEWTERM_PATCH**: Spawns a new `st` terminal with the same current working directory.
- **OPENURLONCLICK_PATCH**: Open URLs on click.
- **SIXEL_PATCH**: Adds SIXEL graphics support for enhanced terminal graphics.
- **SCROLLBACK_PATCH**: Scrollback buffer support.
- **SCROLLBACK_MOUSE_ALTSCREEN_PATCH**: Scrollback with mouse in alternate screen.
- **WIDE_GLYPHS_PATCH**: Allows wide glyphs to be rendered correctly without truncation.

## Acknowledgements

A huge thanks to:
- [bakkeby](https://github.com/bakkeby) for `dwm-flexipatch`, `slock-flexipatch`, and `st-flexipatch`, which make managing patches much easier.
- [UtkarshVerma](https://github.com/UtkarshVerma) for `dwmblocks-async`, enhancing the status bar's performance.
- [ChrisTitusTech](https://github.com/ChrisTitusTech) for introducing me to `dwm` and its capabilities.

Feel free to explore, use, and modify these configurations to suit your needs!
