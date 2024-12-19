# ma35h0 DISTRO for the FrameBuffer graphical backend.

DISTRO = "nvt-base"
DISTRO_NAME = "Nuvoton Release Distro"
DISTRO_VERSION = "4.0.15-scarthgap"

DISTRO_CODENAME = "scarthgap"
SDK_VENDOR = "-pokysdk"
SDK_VERSION := "${DISTRO_VERSION}"

MAINTAINER = "Nuvoton <www.nuvoton.com>"

TARGET_VENDOR = "-poky"

DISTRO = "nvt-ma35h0"


PREFERRED_PROVIDER:udev = "systemd"
PREFERRED_PROVIDER:udev-utils = "systemd"


# =========================================================================
# DISTRO features
# =========================================================================
DISTRO_FEATURES ?= " vc8000 dcultrafb gc520 directfb systemd alsa"
VIRTUAL-RUNTIME_init_manager = "systemd"
DISTRO_FEATURES_BACKFILL_CONSIDERED += "sysvinit"

