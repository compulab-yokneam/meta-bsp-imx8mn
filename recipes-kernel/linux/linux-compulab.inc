FILESEXTRAPATHS_prepend := "${THISDIR}/compulab/imx8mn:"

require compulab/imx8mn.inc

do_configure_append () {
    mkdir ${S}/firmware/brcm -p
    cp ${WORKDIR}/recipe-sysroot/${base_libdir}/firmware/brcm/bcm4339/4339.hcd ${S}/firmware/brcm/BCM4335C0.hcd
    oe_runmake ${MACHINE}_defconfig
}

KERNEL_MODULE_AUTOLOAD += "goodix"

COMPATIBLE_MACHINE = "mcm-imx8m-nano"

DEPENDS += "firmware-imx"
