Summary:	A SIP Soft Phone
Name:		twinkle
Version:	1.4.2
Release:	%{suserel}1
License:	GPL
Group:		Productivity/Telephony/SIP/Clients
Source:		%{name}-%{version}.tar.gz
Prefix:		%{_prefix}
BuildArch:	i586
#BuildArch:	x86_64
BuildRoot:	%{_tmppath}/making_of_%{name}_%{version}
Packager:
URL:		http://www.twinklephone.com
Requires:	alsa
Requires:	commoncpp2 >= 1.6.0 
Requires:	ccrtp >= 1.6.0
Requires:	libzrtpcpp >= 1.3.0
Requires:	kdelibs3 >= 3.2.0
Requires:	libsndfile
Requires:	libspeex >= 1.1.99
Requires:	libxml2
Requires:	file
Requires:	readline
BuildRequires:	alsa-devel
BuildRequires:	qt3-devel
BuildRequires:	update-desktop-files
BuildRequires:  commoncpp2-devel
BuildRequires:  libccrtp-devel
BuildRequires:  libzrtpcpp-devel
BuildRequires:  kdelibs3-devel
BuildRequires:	libsndfile-devel
BuildRequires:	speex-devel
BuildRequires:	boost-devel
BuildRequires:	libxml2-devel
BuildRequires:	file-devel
BuildRequires:	readline-devel

%description
Twinkle is a SIP based softphone for making telephone calls
and instant messaging over IP networks.

%prep

%setup -q

%build
autoreconf -fi
%configure --without-ilbc
#%configure --without-ilbc --enable-libsuffix=64
#sed -i -e "s|(INCPATH *= \)|\1-I/opt/kde3/include |" src/gui/Makefile
make

%install
rm -rf %{buildroot}
%makeinstall
install -d 755 %{buildroot}%{_datadir}/pixmaps
install -m 644 src/gui/images/twinkle48.png %{buildroot}%{_datadir}/pixmaps/twinkle.png
%suse_update_desktop_file -c twinkle Twinkle "A SIP softphone" twinkle twinkle Network Telephony

%clean
rm -rf %{buildroot}

%files
%defattr(-, root, root)
%doc AUTHORS COPYING README ChangeLog
%{_bindir}/%{name}
%{_datadir}/%{name}
%{_datadir}/pixmaps/twinkle.png
%{_datadir}/applications/twinkle.desktop

