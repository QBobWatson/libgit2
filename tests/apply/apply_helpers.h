#define DIFF_DELETE_AND_READD_FILE \
	"diff --git a/asparagus.txt b/asparagus.txt\n" \
	"deleted file mode 100644\n" \
	"index f516580..0000000\n" \
	"--- a/asparagus.txt\n" \
	"+++ /dev/null\n" \
	"@@ -1,10 +0,0 @@\n" \
	"-ASPARAGUS SOUP!\n" \
	"-\n" \
	"-Take four large bunches of asparagus, scrape it nicely, cut off one inch\n" \
	"-of the tops, and lay them in water, chop the stalks and put them on the\n" \
	"-fire with a piece of bacon, a large onion cut up, and pepper and salt;\n" \
	"-add two quarts of water, boil them till the stalks are quite soft, then\n" \
	"-pulp them through a sieve, and strain the water to it, which must be put\n" \
	"-back in the pot; put into it a chicken cut up, with the tops of\n" \
	"-asparagus which had been laid by, boil it until these last articles are\n" \
	"-sufficiently done, thicken with flour, butter and milk, and serve it up.\n" \
	"diff --git a/asparagus.txt b/asparagus.txt\n" \
	"new file mode 100644\n" \
	"index 0000000..2dc7f8b\n" \
	"--- /dev/null\n" \
	"+++ b/asparagus.txt\n" \
	"@@ -0,0 +1 @@\n" \
	"+New file.\n" \

#define DIFF_REMOVE_FILE_TWICE \
	"diff --git a/asparagus.txt b/asparagus.txt\n" \
	"deleted file mode 100644\n" \
	"index f516580..0000000\n" \
	"--- a/asparagus.txt\n" \
	"+++ /dev/null\n" \
	"@@ -1,10 +0,0 @@\n" \
	"-ASPARAGUS SOUP!\n" \
	"-\n" \
	"-Take four large bunches of asparagus, scrape it nicely, cut off one inch\n" \
	"-of the tops, and lay them in water, chop the stalks and put them on the\n" \
	"-fire with a piece of bacon, a large onion cut up, and pepper and salt;\n" \
	"-add two quarts of water, boil them till the stalks are quite soft, then\n" \
	"-pulp them through a sieve, and strain the water to it, which must be put\n" \
	"-back in the pot; put into it a chicken cut up, with the tops of\n" \
	"-asparagus which had been laid by, boil it until these last articles are\n" \
	"-sufficiently done, thicken with flour, butter and milk, and serve it up.\n" \
	"diff --git a/asparagus.txt b/asparagus.txt\n" \
	"deleted file mode 100644\n" \
	"index f516580..0000000\n" \
	"--- a/asparagus.txt\n" \
	"+++ /dev/null\n" \
	"@@ -1,10 +0,0 @@\n" \
	"-ASPARAGUS SOUP!\n" \
	"-\n" \
	"-Take four large bunches of asparagus, scrape it nicely, cut off one inch\n" \
	"-of the tops, and lay them in water, chop the stalks and put them on the\n" \
	"-fire with a piece of bacon, a large onion cut up, and pepper and salt;\n" \
	"-add two quarts of water, boil them till the stalks are quite soft, then\n" \
	"-pulp them through a sieve, and strain the water to it, which must be put\n" \
	"-back in the pot; put into it a chicken cut up, with the tops of\n" \
	"-asparagus which had been laid by, boil it until these last articles are\n" \
	"-sufficiently done, thicken with flour, butter and milk, and serve it up.\n"
