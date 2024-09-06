/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "VehicleAxles.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_tyreType_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tyreType_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_tyreType_value2enum_4[] = {
	{ 0,	12,	"notSpecified" },
	{ 1,	10,	"singleTyre" },
	{ 2,	9,	"dualTyres" },
	{ 3,	14,	"reservedForUse" }
};
static const unsigned int asn_MAP_tyreType_enum2value_4[] = {
	2,	/* dualTyres(2) */
	0,	/* notSpecified(0) */
	3,	/* reservedForUse(3) */
	1	/* singleTyre(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_tyreType_specs_4 = {
	asn_MAP_tyreType_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_tyreType_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tyreType_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tyreType_4 = {
	"tyreType",
	"tyreType",
	&asn_OP_NativeEnumerated,
	asn_DEF_tyreType_tags_4,
	sizeof(asn_DEF_tyreType_tags_4)
		/sizeof(asn_DEF_tyreType_tags_4[0]) - 1, /* 1 */
	asn_DEF_tyreType_tags_4,	/* Same as above */
	sizeof(asn_DEF_tyreType_tags_4)
		/sizeof(asn_DEF_tyreType_tags_4[0]), /* 2 */
	{ &asn_OER_type_tyreType_constr_4, &asn_PER_type_tyreType_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tyreType_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_numberOfAxles_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleAxles__vehicleAxlesNumber__numberOfAxles, trailerAxles),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerAxles,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trailerAxles"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleAxles__vehicleAxlesNumber__numberOfAxles, tractorAxles),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TractorAxles,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tractorAxles"
		},
};
static const ber_tlv_tag_t asn_DEF_numberOfAxles_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_numberOfAxles_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trailerAxles */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tractorAxles */
};
static asn_SEQUENCE_specifics_t asn_SPC_numberOfAxles_specs_9 = {
	sizeof(struct VehicleAxles__vehicleAxlesNumber__numberOfAxles),
	offsetof(struct VehicleAxles__vehicleAxlesNumber__numberOfAxles, _asn_ctx),
	asn_MAP_numberOfAxles_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfAxles_9 = {
	"numberOfAxles",
	"numberOfAxles",
	&asn_OP_SEQUENCE,
	asn_DEF_numberOfAxles_tags_9,
	sizeof(asn_DEF_numberOfAxles_tags_9)
		/sizeof(asn_DEF_numberOfAxles_tags_9[0]) - 1, /* 1 */
	asn_DEF_numberOfAxles_tags_9,	/* Same as above */
	sizeof(asn_DEF_numberOfAxles_tags_9)
		/sizeof(asn_DEF_numberOfAxles_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_numberOfAxles_9,
	2,	/* Elements count */
	&asn_SPC_numberOfAxles_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_vehicleAxlesNumber_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleAxles__vehicleAxlesNumber, tyreType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tyreType_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tyreType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleAxles__vehicleAxlesNumber, numberOfAxles),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_numberOfAxles_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfAxles"
		},
};
static const ber_tlv_tag_t asn_DEF_vehicleAxlesNumber_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_vehicleAxlesNumber_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tyreType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* numberOfAxles */
};
static asn_SEQUENCE_specifics_t asn_SPC_vehicleAxlesNumber_specs_3 = {
	sizeof(struct VehicleAxles__vehicleAxlesNumber),
	offsetof(struct VehicleAxles__vehicleAxlesNumber, _asn_ctx),
	asn_MAP_vehicleAxlesNumber_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_vehicleAxlesNumber_3 = {
	"vehicleAxlesNumber",
	"vehicleAxlesNumber",
	&asn_OP_SEQUENCE,
	asn_DEF_vehicleAxlesNumber_tags_3,
	sizeof(asn_DEF_vehicleAxlesNumber_tags_3)
		/sizeof(asn_DEF_vehicleAxlesNumber_tags_3[0]) - 1, /* 1 */
	asn_DEF_vehicleAxlesNumber_tags_3,	/* Same as above */
	sizeof(asn_DEF_vehicleAxlesNumber_tags_3)
		/sizeof(asn_DEF_vehicleAxlesNumber_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_vehicleAxlesNumber_3,
	2,	/* Elements count */
	&asn_SPC_vehicleAxlesNumber_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_VehicleAxles_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleAxles, vehicleFirstAxleHeight),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleFirstAxleHeight"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleAxles, vehicleAxlesNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_vehicleAxlesNumber_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleAxlesNumber"
		},
};
static const ber_tlv_tag_t asn_DEF_VehicleAxles_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VehicleAxles_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vehicleFirstAxleHeight */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* vehicleAxlesNumber */
};
static asn_SEQUENCE_specifics_t asn_SPC_VehicleAxles_specs_1 = {
	sizeof(struct VehicleAxles),
	offsetof(struct VehicleAxles, _asn_ctx),
	asn_MAP_VehicleAxles_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VehicleAxles = {
	"VehicleAxles",
	"VehicleAxles",
	&asn_OP_SEQUENCE,
	asn_DEF_VehicleAxles_tags_1,
	sizeof(asn_DEF_VehicleAxles_tags_1)
		/sizeof(asn_DEF_VehicleAxles_tags_1[0]), /* 1 */
	asn_DEF_VehicleAxles_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleAxles_tags_1)
		/sizeof(asn_DEF_VehicleAxles_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VehicleAxles_1,
	2,	/* Elements count */
	&asn_SPC_VehicleAxles_specs_1	/* Additional specs */
};

