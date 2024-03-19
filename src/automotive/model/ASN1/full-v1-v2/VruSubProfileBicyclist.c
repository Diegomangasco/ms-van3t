/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "VruSubProfileBicyclist.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_VruSubProfileBicyclist_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_VruSubProfileBicyclist_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_VruSubProfileBicyclist_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	9,	"bicyclist" },
	{ 2,	15,	"wheelchair-user" },
	{ 3,	15,	"horse-and-rider" },
	{ 4,	12,	"rollerskater" },
	{ 5,	9,	"e-scooter" },
	{ 6,	20,	"personal-transporter" },
	{ 7,	7,	"pedelec" },
	{ 8,	13,	"speed-pedelec" },
	{ 15,	3,	"max" }
};
static const unsigned int asn_MAP_VruSubProfileBicyclist_enum2value_1[] = {
	1,	/* bicyclist(1) */
	5,	/* e-scooter(5) */
	3,	/* horse-and-rider(3) */
	9,	/* max(15) */
	7,	/* pedelec(7) */
	6,	/* personal-transporter(6) */
	4,	/* rollerskater(4) */
	8,	/* speed-pedelec(8) */
	0,	/* unavailable(0) */
	2	/* wheelchair-user(2) */
};
const asn_INTEGER_specifics_t asn_SPC_VruSubProfileBicyclist_specs_1 = {
	asn_MAP_VruSubProfileBicyclist_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_VruSubProfileBicyclist_enum2value_1,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_VruSubProfileBicyclist_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_VruSubProfileBicyclist = {
	"VruSubProfileBicyclist",
	"VruSubProfileBicyclist",
	&asn_OP_NativeEnumerated,
	asn_DEF_VruSubProfileBicyclist_tags_1,
	sizeof(asn_DEF_VruSubProfileBicyclist_tags_1)
		/sizeof(asn_DEF_VruSubProfileBicyclist_tags_1[0]), /* 1 */
	asn_DEF_VruSubProfileBicyclist_tags_1,	/* Same as above */
	sizeof(asn_DEF_VruSubProfileBicyclist_tags_1)
		/sizeof(asn_DEF_VruSubProfileBicyclist_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_VruSubProfileBicyclist_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_VruSubProfileBicyclist_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_VruSubProfileBicyclist_specs_1	/* Additional specs */
};
