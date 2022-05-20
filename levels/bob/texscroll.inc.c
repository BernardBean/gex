void scroll_sts_mat_bob_dl_cloud_NORMAL_layer1() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	static int intervalTex1 = 2;
	static int curInterval1 = 2;
	Gfx *mat = segmented_to_virtual(mat_bob_dl_cloud_NORMAL_layer1);

	if (--curInterval0 <= 0) {
		shift_t(mat, 12, PACK_TILESIZE(0, 1));
		curInterval0 = intervalTex0;
	}

	if (--curInterval1 <= 0) {
		shift_s(mat, 20, PACK_TILESIZE(0, 1));
		shift_t_down(mat, 20, PACK_TILESIZE(0, 1));
		curInterval1 = intervalTex1;
	}
};

void scroll_bob() {
	scroll_sts_mat_bob_dl_cloud_NORMAL_layer1();
}
