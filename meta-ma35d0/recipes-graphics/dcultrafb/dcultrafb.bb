SUMMARY = "dcultrafb.ko for kernel framebuffer"
SECTION = "modules"
LICENSE = "CLOSED"

SRC_URI += " \
    file://dcultrafb.ko_5.4.181 \
    file://dcultrafb.ko_5.10.140 \
    "
do_package:qa[noexec] = "1"
do_install() {
    install -d ${D}/${base_libdir}/modules/${MODULE_VERISON}
    install -m 0644 ${WORKDIR}/dcultrafb.ko_${MODULE_VERISON} \
		${D}/${base_libdir}/modules/${MODULE_VERISON}/dcultrafb.ko
}

FILES_SOLIBSDEV = ""
FILES:${PN} = "${base_libdir}/modules/${MODULE_VERISON}/dcultrafb.ko"
PACKAGE_ARCH = "${MACHINE_ARCH}"
COMPATIBLE_MACHINE = "(ma35d0)"
INSANE_SKIP:${PN} = "installed-vs-shipped"
