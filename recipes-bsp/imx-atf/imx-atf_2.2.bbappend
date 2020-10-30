FILESEXTRAPATHS_prepend := "${THISDIR}/compulab/imx8mn:"

include compulab/imx8mn.inc

PACKAGE_ARCH = "${MACHINE_ARCH}"
COMPATIBLE_MACHINE = "mcm-imx8m-nano"
