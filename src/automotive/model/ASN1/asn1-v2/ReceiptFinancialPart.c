/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/asn1_IS_ISO_TS_14906_EfcDsrcApplication.asn"
 * 	`asn1c -fincludes-quoted`
 */

#include "ReceiptFinancialPart.h"

static asn_TYPE_member_t asn_MBR_ReceiptFinancialPart_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReceiptFinancialPart, personalAccountNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalAccountNumber,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"personalAccountNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReceiptFinancialPart, sessionPaymentFee),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PaymentFee,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sessionPaymentFee"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReceiptFinancialPart, sessionCurrentBalance),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PurseBalance,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sessionCurrentBalance"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReceiptFinancialPart, receiptFinancialSerialNumber),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"receiptFinancialSerialNumber"
		},
};
static const ber_tlv_tag_t asn_DEF_ReceiptFinancialPart_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReceiptFinancialPart_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* personalAccountNumber */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sessionPaymentFee */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sessionCurrentBalance */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* receiptFinancialSerialNumber */
};
static asn_SEQUENCE_specifics_t asn_SPC_ReceiptFinancialPart_specs_1 = {
	sizeof(struct ReceiptFinancialPart),
	offsetof(struct ReceiptFinancialPart, _asn_ctx),
	asn_MAP_ReceiptFinancialPart_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReceiptFinancialPart = {
	"ReceiptFinancialPart",
	"ReceiptFinancialPart",
	&asn_OP_SEQUENCE,
	asn_DEF_ReceiptFinancialPart_tags_1,
	sizeof(asn_DEF_ReceiptFinancialPart_tags_1)
		/sizeof(asn_DEF_ReceiptFinancialPart_tags_1[0]), /* 1 */
	asn_DEF_ReceiptFinancialPart_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReceiptFinancialPart_tags_1)
		/sizeof(asn_DEF_ReceiptFinancialPart_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReceiptFinancialPart_1,
	4,	/* Elements count */
	&asn_SPC_ReceiptFinancialPart_specs_1	/* Additional specs */
};

