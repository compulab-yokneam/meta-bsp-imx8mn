SRC_URI_append_mcm-imx8m-nano = " \
	file://0000-ucm-imx8m-mini-Add-basic-support.patch \
	file://0001-ucm-imx8m-mini-update-CPU-model-printed-parameters.patch \
	file://0002-ucm-imx8m-mini-Fix-KConfig-warning.patch \
	file://0003-ucm-imx8m-mini-enable-status-LED.patch \
	file://0004-eeprom-layout-remove-buf-from-the-eeprom_field-struc.patch \
	file://0005-eeprom-layout-add-field-functions-read.patch \
	file://0006-compulab-eeprom-layout-add-read-serial-function.patch \
	file://0007-compulab-integrate-DM_I2C-in-EEPROM-driver.patch \
	file://0008-ucm-imx8m-mini-add-support-for-eeprom-layout-comands.patch \
	file://0009-mx8m-mini-set-Ethernet-MAC-address-environment.patch \
	file://0010-ucm-imx8m-mini-config-Remove-unused-stuff.patch \
	file://0011-ucm-imx8m-mini-Enable-uart4-for-bluetooth.patch \
	file://0012-ucm-imx8m-mini-ddr-Validate-new-setting.patch \
	file://0013-ucm-imx8m-mini-defconfig-Disable-CONFIG_NXP_TMU.patch \
	file://0014-ucm-imx8m-mini-config-Update-h-file.patch \
	file://0015-ucm-imx8m-mini-spl-Refacoring-ddr_init-call.patch \
	file://0016-ucm-imx8m-mini-Kconfig-Refacoring-ddr-init-config-op.patch \
	file://0017-ucm-imx8m-mini-Makefile-Refacoring-ddr-init-build-op.patch \
	file://0018-ucm-imx8m-mini-lpddr4_timing-Add-ucm-imx8m-mini-supp.patch \
	file://0019-ucm-imx8m-mini-config-Enable-the-new-LPDDR4-config.patch \
	file://0020-ucm-imx8m-mini-Move-FS-support-to-defconfig.patch \
	file://0021-ucm-imx8m-mini-config-CONFIG_IMX_OPTEE-y.patch \
	file://0022-set-extended-temperature-range.patch \
	file://0023-ucm-imx8m-mini-Update-memory-init-code.patch \
	file://0024-ucm-imx8m-mini-Add-4G-DRAM-support.patch \
	file://0025-ucm-imx8m-mini-defconfig-Add-d1-d4-configs.patch \
	file://0026-dts-Enable-USB-OTG-support.patch \
	file://0027-env-Change-boot-sequence.patch \
	file://0028-Add-support-for-RAM-size-detection.patch \
	file://0029-Enable-usb-ethernet-dongle-asix-88179.patch \
	file://0030-ucm-ims8m-mini-dts-wp-enable.patch \
	file://0031-SPL-Enable-bus-I2C2.patch \
	file://0032-SPL-Adjust-voltage-for-correct-DDR-initialisation.patch \
	file://0033-spl-enable-memory-id-interpretation.patch \
	file://0034-Enable-env-import-export-commands.patch \
	file://0035-env-Add-env_mmcdev-variable-handling.patch \
	file://0036-ucm-imx8m-mini-Add-1G-DRAM-support.patch \
	file://0037-Trivial-cleaning.patch \
	file://0038-Migration-to-rel_imx_5.4.3_2.0.0.patch \
	file://0039-Fix-storages-numeration-order.patch \
	file://0040-Remove-excessive-defconfigs.patch \
	file://0041-Fix-memory-size-initialisation.patch \
	file://0042-env-Add-to-kernel-command-line-rw-rootwait.patch \
	file://0043-Move-environment-from-4M-to-17k-address.patch \
	file://0044-plat-imx8mm-Move-common-code-to-platform.patch \
	file://0045-compulab-eeprom-Add-DM-support.patch \
	file://0046-mcm-imx8m-mini-Add-basic-support.patch \
	file://0047-mcm-imx8m-mini-env-config-Set-the-machine-values.patch \
	file://0048-mcm-imx8m-mini-env-Add-an-option-to-print-the-machin.patch \
	file://0049-mcm-imx8m-mini-Set-EXTRAVERSION.patch \
	file://0050-mcm-imx8m-mini-config-Update-defconfig.patch \
	file://0051-mcm-imx8m-mini-config-Update-.h-config.patch \
	file://0052-mcm-imx8m-mini-spl-Update-the-board-spl.patch \
	file://0053-mcm-imx8m-mini-Fix-dram_init_banksize-logics.patch \
	file://0054-mcm-imx8m-mini-Add-board_usb_init-and-board_usb_clea.patch \
	file://0055-mcm-imx8m-mini-dts-Enable-usbotg2-in-host-mode.patch \
	file://0056-mcm-imx8m-mini-config-Remove-unused-stuff.patch \
	file://0057-mcm-imx8m-mini-Remove-dram_init_banksize-and-get_eff.patch \
	file://0058-imx8m-soc-Don-t-reduce-the-memory-amount-by-the-opte.patch \
	file://0059-mcm-imx8m-mini-Move-tcm-to-plat-imx8mm.patch \
	file://0060-mcm-imx8m-mini-Refactor-spl-code.patch \
	file://0061-ucm-imx8m-mini-Refactor-the-code-for-2020.04.patch \
	file://0062-cpl-imx8m-mini-Set-LOCALVERSION-intead-of-EXTRAVERSI.patch \
	file://0063-cpl-imx8m-mini-Refactor-.h-configs.patch \
	file://0064-cpl-imx8m-mini-Refactor-.dts.patch \
	file://0065-iot-gate-imx8-Add-basic-support.patch \
	file://0066-mcm-imx8m-mini-config-Update-env-size-offest.patch \
	file://0067-imx8m-mini-env-config-Update-size-offset-value.patch \
	file://0068-imx8-eeprom-Move-to-the-imx8-platform-independent-fo.patch \
	file://0069-imx8-eeprom-Remove-duplicated-code.patch \
	file://0070-imx8mm-plat-Add-the-common-board-file-for-imx8mm-SoC.patch \
	file://0071-imx8m-mini-Refactor-the-usdhc2.patch \
	file://0072-mcm-imx8m-mini-reset-Refactor-the-reset.patch \
	file://0073-imx8m-mini-ddr-Change-the-memory-presets-order.patch \
	file://0074-imx8m-mini-env-Fix-getopt_long-parameters-string.patch \
	file://0075-ucm-imx8m-mini-Fix-reset.patch \
	file://0076-imx8m-mini-spl-Add-__weak-board_fit_config_name_matc.patch \
	file://0077-mcm-imx8m-mini-spl-Add-board_fit_config_name_match.patch \
	file://0078-imx8m-mini-u-boot-Add-__weak-uboot_board_private_ini.patch \
	file://0079-mcm-imx8m-mini-u-boot-Add-uboot_board_private_init.patch \
	file://0080-Add-ddr_init-return-handling.patch \
	file://0081-spl-Enable-Kingston-DRAM-support.patch \
	file://0082-Add-show_suite-function.patch \
	file://0083-Clean-debug-printout.patch \
	file://0084-imx8m-ddr-Add-Nanya-2G-2400-MTS-support.patch \
	file://0085-ucm-imx8m-mini-Enable-status-LED-and-cmd-led.patch \
	file://0086-mcm-and-ucm-Enable-status-LED-for-both-platforms.patch \
	file://0087-Enable-env-address-export-via-FDT.patch \
	file://0088-fw_utils-Enable-actual-env-address-readout.patch \
	file://0089-SPL-Disable-fake-memsize-report.patch \
	file://0090-SDP.patch \
	file://0091-mcm-imx8m-nano-Add-basic-support.patch \
	file://0092-mcm-imx8m-nano-dts-Update-the-machine-device-tree-fi.patch \
	file://0093-mcm-imx8m-nano-dts-Fix-compatible-string.patch \
	file://mcm-imx8m-nano_defconfig \
"
