PORTNAME=	ctre
DISTVERSIONPREFIX=	v
DISTVERSION=	3.7.1
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ header-only library for Compile Time Regular Expressions
WWW=		https://compile-time.re/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c++20-lang

USE_GITHUB=	yes
GH_ACCOUNT=	hanickadot
GH_PROJECT=	compile-time-regular-expressions

CMAKE_OFF=	BUILD_TESTING

NO_BUILD=	yes
NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && \
		${SETENV} ${MAKE_ENV} ${GMAKE} -j ${_MAKE_JOBS}
	@${ECHO} "Test succeeded" # everything is tested during compilation, if you are able to compile then it's ok

.include <bsd.port.mk>
