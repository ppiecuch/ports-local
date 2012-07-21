--- src-IL/src/il_png.c	2011-04-07 21:31:39.000000000 +0200
+++ src-IL/src/il_png.new.c	2011-04-07 21:31:13.000000000 +0200
@@ -278,7 +278,7 @@
 
 	// Expand low-bit-depth grayscale images to 8 bits
 	if (png_color_type == PNG_COLOR_TYPE_GRAY && bit_depth < 8) {
-		png_set_gray_1_2_4_to_8(png_ptr);
+		png_set_expand_gray_1_2_4_to_8(png_ptr);
 	}
 
 	// Expand RGB images with transparency to full alpha channels
