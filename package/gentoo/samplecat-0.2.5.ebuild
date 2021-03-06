# Copyright 1999-2006 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

RESTRICT="nomirror"
IUSE="mysql sqlite tracker auditioner ffmpeg"
DESCRIPTION="SampleCat is a program for cataloguing and auditioning audio samples."
HOMEPAGE="http://ayyi.github.io/samplecat/"
SRC_URI="http://www.orford.org/assets/${P}.tar.gz"

LICENSE="GPL-3"
KEYWORDS="x86"
SLOT="0"

DEPEND=">=media-sound/jack-audio-connection-kit-0.99
	>=media-libs/libsndfile-1.0.10
	dev-libs/dbus-glib
	mysql? ( >=dev-db/mysql-3.23.0 )
	sqlite? ( >=dev-db/sqlite-3 )
	tracker? ( >=app-misc/tracker-0.6 )
	auditioner? ( >=media-sound/ayyi_auditioner-0.1 )
	ffmpeg? ( virtual/ffmpeg )
	>=x11-libs/gtk+-2.6"

src_compile() {
	local myconf=""

	econf \
		${myconf} \
		$(use_enable mysql) \
		$(use_enable sqlite) \
		$(use_enable tracker) \
		$(use_enable ffmpeg) \
		|| die
	emake || die
}

src_install() {
	make DESTDIR=${D} install || die
}

