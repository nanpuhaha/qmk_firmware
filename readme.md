# QMK MSYS

```bash
git clone --recurse-submodules https://github.com/qmk/qmk_firmware.git
cd qmk_firmware

qmk compile -kb lily58 -km default
qmk flash -kb lily58 -km default

# https://docs.qmk.fm/#/cli_commands?id=qmk-flash
# qmk flash [-m <microcontroller>] <compiledFirmware.[bin|hex]>

# https://docs.qmk.fm/#/feature_split_keyboard?id=handedness-by-eeprom
# qmk flash -kb <keyboard> -km <keymap> -bl <bootloader>
# qmk flash -kb crkbd/rev1 -km default -bl avrdude-split-left
# qmk flash -kb crkbd/rev1 -km default -bl avrdude-split-right
qmk flash -kb lily58 -km default -bl avrdude-split-left
qmk flash -kb lily58 -km default -bl avrdude-split-right

qmk flash -kb lily58 -km korean -bl avrdude-split-left
qmk flash -kb lily58 -km korean -bl avrdude-split-right
```

### 한영키 : RALT
- Windows 키 코드 : 229 (0xE5)
- BIOS 키 코드 56 (0x38)
- VK 키 코드 : 21 (0x15)  `VK_KANA`

- [QMK Keycode](https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md)
- [QMK Keycode Cheatsheet](https://yanfali.github.io/keycodes/)

- `KC_RIGHT_ALT` : Right Alt (Option/AltGr). aliases: `KC_RALT`, `KC_ROPT`, `KC_ALGR`
- `RALT(kc)` : Hold Right Alt (AltGr) and press kc. aliases: `ROPT(kc)`, `ALGR(kc)`
- `RALT_T(kc)` : Right Alt (AltGr) when held, kc when tapped. aliases: `ROPT_T(kc)`, `ALGR_T(kc)`
