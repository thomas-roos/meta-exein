FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://btf.scc"

DEPENDS += "pahole-native"

EXTRA_OEMAKE += " PAHOLE=pahole"
KCONFIG_CONFIG_COMMAND:append = " PAHOLE=pahole"
