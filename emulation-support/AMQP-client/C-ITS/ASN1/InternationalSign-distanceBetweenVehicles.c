/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "GDD"
 * 	found in "/mnt/EVO/ASN1-C-ITS/GDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "InternationalSign-distanceBetweenVehicles.h"

/*
 * This type is implemented using Distance,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_InternationalSign_distanceBetweenVehicles_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_InternationalSign_distanceBetweenVehicles = {
	"InternationalSign-distanceBetweenVehicles",
	"InternationalSign-distanceBetweenVehicles",
	&asn_OP_SEQUENCE,
	asn_DEF_InternationalSign_distanceBetweenVehicles_tags_1,
	sizeof(asn_DEF_InternationalSign_distanceBetweenVehicles_tags_1)
		/sizeof(asn_DEF_InternationalSign_distanceBetweenVehicles_tags_1[0]), /* 1 */
	asn_DEF_InternationalSign_distanceBetweenVehicles_tags_1,	/* Same as above */
	sizeof(asn_DEF_InternationalSign_distanceBetweenVehicles_tags_1)
		/sizeof(asn_DEF_InternationalSign_distanceBetweenVehicles_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Distance_1,
	2,	/* Elements count */
	&asn_SPC_Distance_specs_1	/* Additional specs */
};

