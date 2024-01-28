1. Download QMK MSYS
2. Launch QMK MSYS from the start menu and cd into the directory where you want the qmk files to live
3. Git clone this repo
4. make git-submodule
5. qmk compile -kb avalanche/v4 -km mike -e CONVERT_TO=rp2040_ce
6. File will be in the .build folder where the qmk files were cloned to
