# Khóa học LINUX MASTER

### Syllabus overview (Giáo trình) - Đã tải về

### MODULE 1: Understanding linux concepts

1. WHAT IS LINUX?

- Tự tìm hiểu bằng cách google

2. Unix và Linux

- Unix là gì?
  - Nó là một hệ thống đa nhiệm, đa người dùng và ổn định đối với các máy chủ, máy trạm hoặc các laptop. Các hệ thống UNIX cũng có một giao diện đồ họa (GUI) giống như Windows của Microsoft, tạo sự dễ dàng trong sử dụng
  - Một số phiên bản Unix hiện nay có thể kể đến:
    - HP-UX (HP)
    - AIX (IBM)
    - Solaris (Sun/Oracle)
    - Mac OS X (Apple)

=> Linux được tạo ra với mục đích cung cấp cho người dùng 1 giải pháp phần mềm miễn phí thay thế cho UNIX.

- Unix và Linux:

  - Unix chỉ được cài đặt trên một số phần cứng nhất định tuy nhiên Linux thì có thể cài đặt ở nhiều phần cứng
  - Linux có thể chạy trên rất nhiều nền tảng khác nhau như x86 và x64 từ Intel/AMD trong khi UNIX chỉ chạy trên 1 hoặc 2 kiến trúc nhất định.
  - Unix là một hệ điều hành đóng.

  => Và câu hỏi đặt ra là: Nếu UNIX là nguồn đóng thì tại sao nhiều hãng lại có mã nguồn để phát triển riêng? Câu trả lời có lẽ khiến bạn càng bất ngờ. Ban đầu, UNIX được phân phối cho các trường đại học và những doanh nghiệp có nhu cầu, với đầy đủ mọi thứ từ mã nguồn đến các công cụ lập trình. Nói cách khác, nếu UNIX là 1 chiếc xe thì khách hàng được cung cấp mọi thứ từ bản vẽ đến từng cái tua vít. Cũng chính vì thế mà các trường học và công ty có thể chỉnh sửa, thậm chí viết lại cả HĐH. Linux mặt khác là 1 HĐH mã nguồn mở, người ta có thể tải, sử dụng, chỉnh sửa miển phí mà ko gặp trở ngại về luật bản quyền.

  - Có thể tìm hiểu thêm tại `google`

3. Linux vs Windows

- Price:
  - Linux: Free (Một số phiên bản mất phí)
  - Window: Phải trả phí
- Thân thiện:
  - Window: Thân thiện với người dùng
  - Linux: Không thân thiện với người dùng
- Reliability (Độ tin cậy)
  - Linux: rất đáng tin cậy, có thể chạy chương trình trong nhiều năm, nhiều tháng mà không cần phải khởi động lại máy
  - Window: Thường xuyên yêu cầu khởi động lại
- Software:
  - Linux: Thường dùng cho các phần mềm là chủ yếu
  - Window: Dùng cho văn phòng, phần mềm, games, tiện ích, ...
- Đa nhiệm:
  - Linux: Rất tốt cho đa nhiệm
  - Window: Cần tài nguyên bộ nhớ, CPU mạnh thì mớ hoạt động tốt
- Open source
  - Linux: YES
  - WINDOW: NO
- SECURE (Độ bảo mật):
  - Linux: An toàn
  - Window: kém an toàn
  - Nguyên nhân: Window cho phép người dùng truy cập nhiều ứng dụng hơn => Gia tăng mối nguy cơ về bảo mật (vì các ứng dụng sử dụng internet), mặt khác, hệ điều hành linux là open source, nó cho phép mọi người đâo sâu về nó hơn => Được soi bởi nhiều người thì độ an toàn cũng cao hơn

4. Một số câu hỏi

- Cấu trúc: Hardware => Operating system => aplications => users

### MODULE 2: Download, Install and Configure

1. CentOS vs CentOS Stream

- Dự án CentOS giám sát hai phiên bản của bản phân phối – CentOS Linux và CentOS Stream. Sự khác biệt chính giữa chúng là phiên bản trước là hạ nguồn của Red Hat Enterprise Linux trong khi CentOS Stream là phiên bản ngược dòng chứa các bản cập nhật nhỏ sắp tới của Red Hat.

2. Download CentOS 9 stream

- Lên google search và tải về nhé

3. Virtual Machine Managment

### MODULE 3: SYSTEM ACCESS AND FILE SYSTEM

1. Important things to remember in linux (Một số điều quan trọng trong linux)

- Để thoát con chuột khỏi VM WARE chỉ cần sử dụng phím tắt `ALT + CONTROL`
- Root là người dùng mạnh nhất trên hệ thống (giống như người quản trị viên cúa bạn)
  - Root là tài khoản mạnh nhất có thể tạo sửa đổi xóa tài khoản và thay đổi hệ thống tệp cấu hình
  - Root cũng có thể xóa toàn bộ hệ điều hành
- Linux phân biệt chữa hoa thường (VD: ABC not the same abc)
- Tránh sử dụng khoảng trắng(dấu cách khi tạo file và thư mục)
- Linux Kernel không phải là một hệ điều hành, nó là một phần mềm nhỏ với bất kì hệ điều hành Linux nào nhận lệnh từ người dùng và "pass" chúng thông qua phần cứng hệ thống và thiết bị ngoại vi
- Linux chủ yếu là CLI (Command Line Interface) không phải là GUI (Graphical User Interface)

2. Access to Linux System

- Có hai cách khác nhau để truy cập vào hệ điều hành của mình

  - Console: Truy cập trực tiếp vào hệ điều hành khi nó được kết nối thông qua VGA, HDMI, ... hoặc cáp hiển thị khác...
  - Remote: Truy cập từ xa vào hệ điều hành của bạn thông qua mạng

- Nếu sử dụng máy window để kết nối với linux thì cần tải thêm một client là `putty`, còn nếu đang sử dụng MAC thì không cần phải làm thế, nếu muốn kết nối thì chỉ cần sử dụng dòng lệnh: `SSH 192.168.1.5`, Nếu muốn truy cập vào Linux từ một máy Linux khác thì sử dụng cách giống như với MAC

3. Download and Install Putty

- Putty là một hệ thống cho phép bạn kết nối với hệ thống Linux từ máy tính Window từ xa
- Nếu đang dùng máy window cài máy ảo Linux thì cần cài putty trên hệ điều hành window nhé
- Trên máy Mac hoặc Linux thì chả cần gõ lệnh sau là có thể kết nối từ xa đến máy chủ Linux của bạn: `ssh -l ten_nguoi_dung_dich dia_chi_ip`

- Làm thế nào để lấy được địa chỉ IP trên máy tính?
  - Mở CLI và gõ câu lệnh: `ifconfig` hoặc nếu sử dụng phiên bản CentOS từ 7.5 trở lên thì sử dụng lệnh `ip addr`
  - Nếu muốn sử dụng lệnh `ifconfig` ở phiên bản CentOS > 7.5 thì cần download package: `yum install net-tools`
  - Sau khi gỗ xong câu lệnh trên thì sẽ thấy `inet 192.168.220.131`, hãy coppy địa chỉ ip này và dán vào `putty` vừa được cài đặt ở máy window của bạn

4.  Command Prompts and Getting Prompts Back (Dấu nhắc lệnh và quay trở lại dấu nhắc lệnh)

- Khi vào terminal thì sẽ có một dấu nhắc lệnh hiện lên có dạng: `[root@TranTuanDatServer-]#`
  - `root` ở đây thể hiện bạn đang có quyền quản trị cao nhất trong hệ điều hành
  - `TranTuanDatServer` là tên máy tính của bạn
  - `#`: Nếu ở root thì sẽ hiển thị dấu `#` còn nếu ở người dùng khác root thì sẽ hiển thị `$`
- Để thực hiện một lệnh nào đó thì cần viết sau dấu nhắc lệnh dạng `[root@TranTuanDatServer-]#`, Nếu trong trường hợp không thấy dấu nhắc lệnh thì sử dụng phím tắt `Ctr + C` để quay trở lại dấu nhắc lệnh

5. FileSystem Structure and Description (Cấu trúc Hệ thống file và mô tả)

- Hệ thống tệp là gì?

  - Là một hệ thống được hệ điều hành máy tính sử dụng để quản lí các tệp và thư mục của bạn
  - Hệ thống tệp sẽ kiểm soát cách dữ liệu được lưu hoặc truy xuất từ đĩa cứng máy tính của bạn

- Cấu trúc file trong linux được chia thành các tệp khác nhau:

- `/boot`: Chứa những tập tin liên quan tới chương trình quản lý khởi động máy.
  - Các tập tin initrd, vmlinux, grub được lưu trong thư mục /boot
  - VD: initrd.img-2.6.32-24-generic, vmlinuz-2.6.32-24-genericVí dụ: initrd.img-2.6.32-24-generic, vmlinuz-2.6.32-24-generic
- `/root`: là thư mục chính của người dùng root (Khác với `/` nhé)
- `/dev`: Chứa thiết bị hệ thống như Disk, CdRom, Spreakers, Keyboard, Flash Drive, ...
  - Bất kì thiết bị ngoại vi nào gắn vào hệ thống linux cũng được tạo dưới dạng tệp, nó được hiển thị trong `/dev`
- `/etc`: Là thư mục quan trọng nhất trong hệ thống linux, Nó chứa tất cả các tệp cấu hình.
  - Nếu bạn đang chạy một ứng dụng nào đó trên hệ thống linux hoặc đi kèm với hệ thống linux của bạn thì những file cấu hình của ứng dụng đó được chứa trong `/etc`
  - Nó cũng chứa các đoạn mã khởi động và tắt mà được dùng để khởi động/dừng các chương trình đơn lẻ.
  - Nếu muốn sửa đổi tệp cấu hình của ứng dụng nào đó thì đi tới `/etc` và tìm
  - VD: /etc/resolv.conf, /etc/logrotate.conf
- `/bin` (Trỏ tới `/usr/bin`):
  - Chứa tất cả các lệnh người dùng có thể thao tác với hệ thống linux
  - Chứa các tập tin thực thi
  - VD: Các lệnh được sử dụng bởi tất cả người dùng trong hệ thống được lưu ở đây. Ví dụ: ps, ls, ping, grep, cp.
  - Tập trung các tập tin thực thi, thư viện, tài liệu, và mã nguồn cho các chương trình mức độ thứ hai.
  - `/usr/bin` chứa các tập tin thực thi cho các chương trình của người dùng. Nếu bạn không thể tìm thấy trong thư mục `/bin` thì tìm trong `/usr/bin`. Ví dụ: at, awk, cc, less, scp
  - `/usr/sbin` chứa các tập tin thực thi cho quản trị hệ thống. Nếu bạn không thể tìm thấy trong `/sbin` thì tìm trong `/usr/sbin`. Ví dụ: atd, cron, sshd, useradd, userdel
  - `/usr/lib` chứa các tập tin thư viện `/usr/bin` và `/usr/sbin`
  - `/usr/local` chứa các chương trình của người dùng mà bạn cài từ mã nguồn. Ví dụ, khi bạn cài Apache từ mã nguồn, nó được đưa vào thư mục /usr/local/apache2
- `/sbin` (Trỏ tới `usr/sbin`): Chứa các lệnh System/filesystem
  - Giống như /bin, /sbin cũng chứa các tập tin thực thi
  - Các lệnh được lưu trong thư mục này về cơ bản được dùng cho người quản trị và được dùng để bảo trì hệ thống.
  - VD: iptables, reboot, fdisk, ifconfig, swapon
- `/opt`: Các ứng dụng tùy chọn hay thêm
  - opt là viết tắt của optional
  - Chứa các ứng dụng thêm của các hãng khác nhau.
  - Các ứng dụng thêm nên được cài trong thư mục con của thư mục /opt/
- `/proc` (Thông tin tiến trình):
  - Chứa thông tin về các tiến trình của hệ thống.
  - Như các tập tin chứa thông tin về các tiến trình đang chạy. VD: /proc/{pid} directory >>> lưu thông tin về tiến trình với pid bạn chọn.
  - Hay các tập tin hệ thống ảo với nội dung về tài nguyên hệ thống. VD: /proc/uptime
  - Khi tắt máy => Các tiến trình sẽ đóng => vì thế khi tắt máy sẽ không có gì chứa trong `/proc`
- `/lib` (Trỏ tới `usr/lib`): Chứa tất cả các thư viện lập trình C. Các tệp đó cần thiết cho các lệnh và ứng dụng

  - Chứa các tập tin thư viện để hỗ trợ các tập tin thực thi được lưu trong /bin và /sbin
  - Tên của các tập tin này là ld* hay lib*.so.\*
  - Muốn xem lệnh được sử dụng bởi thư viện nào thì có thể sử dụng: `strace -e open pwd`

- `/tmp`: Sử dụng cho các tệp tạm thời

  - Thư mục chứa các tập tin tạm được tạo bởi hệ thống và người dùng.
  - Các tập tin trong thư mục này bị xóa khi hệ thống khởi động lại.

- `/home`: Thư mục người dùng

  - Chứa các tệp tin của người dùng trong hệ thống
  - VD: `/home/john`, `home/nikita`

- `/var`: Các tập tin biến đổi

  - var là viết tắt của các tập tin biến đổi.
  - Gồm những tập tin mà dung lượng lớn dần theo thời gian sử dụng
    - Chẳng hạn — các tập tin ghi chú hệ thống (/var/log)
    - Các gói và các tập tin cơ sở dữ liệu (/var/lib))
    - thư điện tử (/var/mail)
    - hàng đợi – in queues (/var/spool)
    - các tập tin khóa (/var/lock)
    - các tập tin tạm được dùng khi khởi động lại (/var/tmp)

- `/run`: Đây là nơi hệ thống khởi động ở những giai đoạn rất sớm (VD: systemd and udev), Lưu trữ các tệp thời gian chạy tạm thời như PID

  - Sẽ mất khi hệ thống bị tắt

- `/mnt`: Được dùng để gắn kết hệ thống tệp bên ngoài

- `/media`: Các thiết bị tháo lắp

  - Thư mục chưa các mount tạm thời cho các thiết bị tháo lắp.
  - VD: /medica/cdrom cho CD-ROM; /media/floppy cho ổ đĩa mềm; /media/cdrecorder cho ổ đĩa ghi CD.

- `/srv` – Dữ liệu dịch vụ
  - srv là viết tắt của service.
  - Chứa dữ liệu liên quan tới các dịch vụ trên máy chủ.
  - Ví dụ: /srv/cvs chứa dữ liệu liên quan tới CVS.

### File System Navigation Commands (cd , ls and pwd)

- `cd` (Change directory): Thay đổi thư mục
- `ls` (Listing): Hiển thị danh sách thư mục con trong thư mục hiện tại
- `pwd`: Cho biết vị trí hiện tại mà dấu nhắc lệnh đang trỏ tới
- Lưu ý: `cd` chỉ sử dụng cho Thư mục, không thể sử dụng `cd` cho một file

### Một số lệnh cơ bản khác

- Để vào tài khoản root ta nhấn: `su -`
- `clear`: Xóa màn hình
- `cd`: Đến thư mục của người dùng hiện tại
- `cd ..`: Quay lại thư mục cha
- Để paste văn bản từ máy tính chủ vào máy ảo thì sử dụng `Ctr + Shift + V`
- `cd /tenThuMucXuatHienORoot`: Nếu thư mục này là cấp con đầu tiên của thư mục root thì nó sẽ điều hướng tới, ngay cả khi bạn có đứng ở đâu
- `whoami` Để xem ai là người đăng nhập hiện tại
- `hostname`: Xem hostname của máy

### Lệnh ls

- File ẩn là nhừng file bắt đầu bằng dấu `.`
- `ls`: Xem toàn bộ tên thư mục, file trong thư mục hiện tại
- `ls -l`: Xem toàn bộ folder, file trong thư mục hiện tại (Kèm theo chi tiết, không hiển thị file ẩn)
- `ls -a`: Xem toàn bộ tên folder, file trong thư mục hiện tại (Kể cả file ẩn)

- Khi sử dụng `ls -l` thì nó sẽ hiển thị như dưới đây:

![ls -l](./imgs/ls.jpg)

- Giải thích:
  - Trong mỗi dòng xuất hiện dạng `dr-xr-xr-x`, chữ đầu tiên là loại tệp:
    - `d`: directory (Folder)
    - `-`: File
    - `l`: Liên kết

### Linux File or Directory Properties

- Để xem các thuộc tính của nhiều file và folder ta sử dụng `ls -l`

![ls -l](./imgs/file%20properties.png)

- Trong đó:

  - Cột đầu tiên (Permission modes)
    ![ls -l](./imgs/Files-permissions-and-ownership-basics-in-Linux.png)

  - Cột thứ 2 (Links): Là số lượng liên kết cứng tới thư mục đó

    - Số lượng liên kết cứng là số lượng thư mục con ngay lập tức mà nó có cộng với thư mục mẹ và chính nó

  - Cột Owner: Cho biết ai là chủ của thư mục này
  - Cột Group: Là nhóm sở hữu tệp đó
  - Cột Size: là kích thước của tệp đó (Tính bằng kb)

### Linux file type

- `-`: Regular file
- `d`: Directory
- `l`: link
- `c`: Special file or device file
- `s`: socket
- `p`: Named pipe
- `b`: Block device

### What is root?

- Có 3 loại Root trong hệ thống linux
  - Root account: Root là một tài khoản hoặc người dùng có quyền sử dụng tất cả các lệnh và quyền truy cập vào tất cả các tệp, nó giống như quyền quản trị admin trên hệ thống window
  - Root (/): Thư mục đầu tiên trong hệ thống linux
  - Root home directory: Tài khoản gốc hoặc tài khoản người dùng nào cũng có một thư mục riêng, thư mục đó nằm trong `/home/ten_nguoi_dung`

### Changing Password

- Lệnh thay đổi password của một người dùng nào đó: `passwd userid` (userid chính là tên người dùng)
- Nếu chỉ gõ `passwd` khi bạn đang ở root thì nó sẽ thay đổi mật khẩu tài khoản root
- Chỉ tài khoản root mới có thể chỉ định `userid` để thay đổi mật khẩu của người dùng
- Người dùng không phải root mà muốn thay đổi mật khẩu thì chỉ cần gõ `passwd`

### Absolute and Relative Paths (Đường dẫn tuyệt đối và tương đối)

- Trong Linux có hai loại đường dẫn để điều hướng
  - Absolute path (Đường dẫn tuyệt đối)
    - Đường dẫn tuyệt đối là đường dẫn được bắt đầu bằng: `/`. VD: `cd /var/log/samba`, khi sử dụng đường dẫn tuyệt đối thì dù bạn có đang ở thư mục nào (Có bao nhiêu cấp con đi chăng nữa) thì nó vẫn luôn trỏ lại về thư mục gốc và đi tới đường dẫn mà bạn chỉ định (Bắt đầu từ thư mục gốc)
  - Relative path (Đường dẫn tương đối)
    - Đường dẫn tương đối là đường dẫn không bắt đầu bằng `/`, khi sử dụng đường dẫn tuyệt đối thì nó sẽ sử dụng vị trí hiện tại cộng thêm với đường dẫn mà bạn chỉ định
- Muốn hoàn thành nhanh thư mục thì nhấn `tab`

### Creating Files and Directories (touch, cp, vi, mkdir)

1. Creating file

- `touch file_name`: Tạo một file trống
  - Để tạo nhiều file trống cùng một thời điểm: `touch file_name1 file_name2 ...`
- `cp file_path_source new_file_path_denst`: Coppy một file sang một file khác (Đồng thời tạo file "khác" đó)
- `vi file_name`: Tạo tệp thông qua vi (Trình soạn thảo), đồng thời nó sẽ tạo ra tệp mới luôn (Ngoài ra lệnh này còn có thể giúp chỉnh sửa một file đã có sẵn)
  - Tuy nhiên muốn `vi` tạo ra file mới thì lúc thoát khỏi trình soạn thảo phải lưu nó lại nhé

2. Creating folder

- `mkdir folder_name`: Tạo folder
- Để tạo nhiều folder trên cùng một dòng lệnh: `mkdir folder_name1 folder_name2 ...`

3. Lưu ý

- Để xem các file đã được tạo hoặc sửa đổi lần cuối theo thứ tự thời gian cập nhật từ lâu nhất đến mới nhất: `ls -ltr` (Cái cuối cùng là cái mới nhất)

- Để xem các file đã được tạo hoặc sửa đổi lần cuối theo thứ tự thời gian cập nhật từ mới nhất đến lâu nhất: `ls -lto` (Cái cuối cùng là cái cập nhật lâu nhất)

- Lưu ý: `ltr và lto` nó có ý nghĩa đấy nhé (Lên google search xem)

- Khi ở thư mục người dùng thì chỉ được tạo file trong chính thư mục của mình, không thể tạo trong thư mục của root

### Coppy directories

- Để coppy một directory thì chúng ta cần thêm tùy chọn `-R`
- Lệnh: `cp -R source_folder dest_folder`
- `-R` được viết tắt từ Recursion (Đệ quy)
- Nếu không có option `-R` thì nó sẽ báo lỗi "Không thể sao chép vì đây là một thư mục"

### Finding Files and Directories (find, locate)

- Trong linux có 2 lệnh chính được sử dụng để tìm kiếm files/directories
  - `find`
    - `find -name test1`: Tìm kiếm file có tên là `test1`: Đầu ra giả sử là `./Document/test1`
  - `locate`
    - `locate test1`: Hiển thị vị trí của file/folder có tên là test1: Đầu ra tương tự: `/home/dat/Document/test1`
- Lưu ý: Nếu Output của lệnh `locate` không có bất kì kết quả nào thì phải sử dụng lệnh `updatedb` với quyền ROOT, ngoài ra cần chắc chắn rằng package `mlocate` đã được cài đặt.

  - Để kiếm tra `mlocate` đã cài đặt hay chưa sử dụng: `rpm -qa | grep mlocate`
  - Để install: `yum install mlocate`

- Nếu bạn không biết folder/file muốn tìm bắt đầu từ đâu thì có thể sử dụng:
  - `find */test1`: Tìm kiếm file/folder kết thúc bằng test1
  - `find . -name "test1"`: Tìm file/folder có tên là `test1`
  - `find / -name "ifcfg-enp0s3"` (Lệnh này phải chạy sudo nhé) Nó sẽ tìm kiếm ngoài root (absolute path)
  - Lưu ý: Khi chạy `find / ...` thì nó sẽ ra ngoài root và tìm từng folder một, nếu không bật mode root thì sẽ báo lỗi `access denind`
- Alias
  - `*`: Bất kì đường dẫn nào đều hợp lệ

### Difference between find and locate

- `locate`: sử dụng một cơ sở dữ liệu được xây dựng trước, cơ sở dữ liệu này được cập nhật thường xuyên

- `find`: lặp qua hệ thống tệp để định vị tệp

=> Nhận xét: Vì lý do trên, `locate` sẽ xác định vị trí nhanh hơn nhiều so với `find`, tuy nhiên có thể không chính xác (khi dùng `locate`) nếu database (có thể gọi là được cache) không được cập nhật

- Khi hệ thống tệp được cập nhật thì từ vài phút đến vài giờ sau hệ thống linux sẽ tự động cập nhật cơ sở dữ liệu => Nếu muốn nó được cập nhật luôn thì phải chạy lệnh `updatedb`

### Wild Cards

- Một `Wild cards` là một thẻ đại diện cho kí tự, nó có thể được sử dụng để thay thế cho bất kì lớp kí tự nào trong hộp tìm kiếm

1. Một vài wild cards hay sử dụng

- `*`: Đại diện cho 0 hoặc nhiều kí tự
- `?`: Đại diện cho một kí tự
- `[]`: Đại diện cho những kí tự được truyền vào

- Ví dụ trong hệ thống tệp linux của bạn có 5 file như sau:
  - `abc-x1`
  - `abc-x2`
  - `abc-x3`
  - `abc-x4`
  - `abc-x5`

=> Nếu muốn xóa hết các file thì sử dụng `rm abc*`

- `touch abcd{1..9}-xyz`: Tạo ra 9 file
- `ls -l abc*`: Liệt kê tên của tất cả các file có tên bắt đầu bằng `abc`
- `rm *xyz`: Xóa mọi thứ kết thúc là `xyz`
- `ls -l ?abc*`: Hiển thị tất cả các file/folder có tên bắt đầu bằng 1 kí tự bất kì + abc + mọi thứ đều hợp lệ
- `ls -l *[abc]*`: Hiển thị tất cả các file/folder có các kí tự `abc` trong tên (Chỉ cần chứa 1 kí tự là thỏa mãn), Vì cái này có nhiều output nên mình sử dụng lệnh sau để xem trên nhiều trang: `ls -l *[ab]* | more`
- `rm *xy*`: Xóa toàn bộ tệp có `xy` ở trong tên

2. other wild cards

- Còn nhiều cái khác, lên google tra nhé

### Soft and hard links (Liên kết mềm và liên kết cứng)

- Mỗi khi tạo một tệp thì máy tính sẽ gán một một số cho tệp đó trên đĩa cứng và liên kết số, số đó được gọi là `inode`, mỗi khi chúng ta cố gắng truy xuất hoặc đọc tệp thì nó sẽ truy xuất số đó

- Liên kết mềm (Soft link) là một liên kết được tạo và nó sẽ bị xóa nếu một tệp bị xóa hoặc đổi tên

  - Tạo liên kết mềm bằng cách: `ln -s`

- Liên kết cứng (Hard link): Khi xóa hoặc đổi tên tệp nguồn thì liên kết cứng cũng sẽ không thay đổi

  - Tạo liên kết cứng bằng cách: `ln`

- Theo dõi hình ảnh dưới đây:
  ![iNode](/imgs/inode.png)

=> Do `hard links` liên kết trực tiếp với inode nên nó không bị mất đi khi file bị xóa hay đổi tên
=> Do `soft links` liên kết với `inode` thông qua tệp nên dĩ nhiên nó sẽ mất khi file bị xóa hoặc thay đổi

- NOTE: Không thể tạo soft link hay hard link trong cùng một tên, đó là lý do tại sao phải cd tới tmp trong ví dụ dưới đây

![iNode](/imgs/ex.jpg)

- Để viết nội dung vào tệp sử dụng: `echo "hulk is supperman" > hulk` (Viết nội dung trong dấu ngoặc kép vào file có tên là `hulk`)
- Sau khi viết nội dung vào trong file gốc thì khi ở file liên kết ta cũng sẽ thấy nội dung này

- Để xem số `inode` ở mỗi file: `ls -ltri`: Số đầu tiên chính là `inode`
- Để xem `inode` của một file cụ thế; `ls -ltri path_file`
- Lưu ý: chỉ số `inode` ở file gốc và file liên kết mềm là khác nhau

![Inode](./imgs/ex1.jpg)

![Inode2](./imgs/ex2.jpg)

- Ví dụ về tạo liên kêt cứng (Hard links), liên kết này vẫn tồn tại khi xóa nó ở thư mục gốc

![Inode3](./imgs/ex3.jpg)

=> Nhìn ảnh thì chúng ta biết kí tự đầu tiên của `hulk` trong `/tmp` là `-` => Điều này chứng tỏ nó không được liên kết với file nào cả => Đây là sự khác biệt giữa `Hard links` và `Sort Links`

- Khi thêm nội dung vào file sử dụng `echo "content..." > file_path` thì nó sẽ ghi đè nội dung mới nhất vào nội dung hiện tại. Còn nếu sử dụng `echo "content..." >> file_path` thì nó sẽ ghi vào dưới cùng của file hiện tại

### Linux command syntax

- Để tìm hiểu cú pháp của một lệnh thì ta sử dụng: `man command_name`
- Mỗi câu lệnh sẽ có option đi kèm, google để biết thêm thông tin chi tiết nhé

### Files and Directory Permissions (chmod)

- Unix là hệ thống nhiều người dùng, mọi file, folder trong tài khoản của bạn đều được bảo vệ hoặc có thể làm cho người dùng khác có thể truy cập nó bằng cách thay đổi quyền của nó
- Quyền của file hoặc directory có thể bị hạn chế bởi loại tệp
- Có 3 quyền sau:

  - `r`: read
  - `w`: write
  - `x`: excute = runing a program (Nếu đó là một chương trình, nếu bản thân tệp là một tập lệnh hoặc một chương trình, thì nó có quyền `x` => Nếu người dùng được phép chạy một chương trình, họ sẽ có quyền thực thi đối với nó)

- Mỗi quyền (`rwx`) có thể được kiểm soát với 3 cấp độ khác nhau:
  - `u`: user (yourself)
  - `g`: group (Có thể là những người trong cùng một dự án hoặc nhóm)
  - `o`: other (Tất cả mọi người trên hệ thống)
- Quyền của tập tin hoặc thư mục được hiển thị thông qua lệnh: `ls -l command`

  - Nó có dạng như sau: `-rwxrwxrwx` (Những nhóm trong kí hiệu này đã được giải thích ở những bài trước, nếu không thấy thì có thể google nhé)

- Lệnh thay đổi quyền: `chmod`

- Hình sau đang thực hiện xóa quyền `x` trong file `dat_permision` ở `group`
  ![permision](./imgs/permision.jpg)

- Hình sau đang thực hiện xóa quyền `w` cho `a` (all user)
  ![permision2](./imgs/per2.jpg)

- `chmod u+rwx dat_permision`: Thêm quyền cho file/folder được chỉ định ở `u` (user)

- Ví dụ sau thêm quyền `rw` ở nhóm `u` (user)
- Câu hỏi: Tại sao trong các thư mục trên lại có quyền `x`? Có phải thư mục là một tập lệnh (Script) nên nó mới có quyền `x` (Thực thi)

  - Trả lời: thư mục không phải là một tập lệnh, sở dĩ nó có quyền `x` để chúng ta có quyền `cd` vào nó

- Tổng kết:
  - Cú pháp: `chmod [OPTIONS] MODE FILE...`
  - Cú pháp của lệnh chmod khi sử dụng chế độ symbolic như sau: `chmod [OPTIONS] [ugoa…][-+=]perms…[,…] FILE...`
    - Tham số `ugoa` là nhóm đối tượng nào sẽ được xử lý quyền:
      - u =` Chủ sở hữu (owner)
      - g = Nhóm người dùng (group)
      - o = Người dùng khác (other)
      - a = Tất cả user (all)`
      - Nếu bạn không truyền tham số này vào lệnh thì nó sẽ lấy giá trị mặc định là a.
    - Tham số thứ hai là [-+=], dùng để xác định quyền sẽ được xóa, thêm hoặc thiết lập mới.
      - Dấu `-` là xóa bớt quyền
      - Dấu `+` là thêm quyền
      - Dấu `=` là gán lại quyền

### File Permissions Using Numeric Mode

- `0`: No permision
- `1`: Excute
- `2`: Write
- `4`: Read
- Set quyền bằng cách cộng các quyền trên lại
- Lệnh: `chmod number path_file`
- Để xóa toàn bộ quyền: `chmod 000 path_file`

![change_permision](./imgs/change_permision.jpg)

### File Ownership (Quyền sở hữu tệp)

- Quyền sở hữu tệp được tạo ra ở cấp độ người dùng và cấp độ nhóm
- Có 2 chủ sở hữu của một tệp hoặc thư mục:
  - User (Người tạo tệp /thư mục)
  - Group
- Lệnh để thay đổi file ownship

  - `chown` và `chgrp`
    - `chown`: Thay đổi chủ sở hữu của một file
    - `chgrp`: Thay đổi sở hữu nhóm của một file
  - Option:
    - `-R`: Thay đổi quyền của thư mục mẹ và cả những thư mục bên trong nó nữa

- Để thay đổi được các quyền sở hữu của một file bạn cần trong quyền `sudo`

  - Để thay đổi user: `sudo chown <username> <filename>`
  - Để thay đổi gropu: `sudo chgrp <groupname> <filename>`
  - Để thay đổi cả user và group: `sudo chown <username>:<groupname> <filename>`

- Để thoát khỏi người dùng root: `exit`

### Access Control List (ACL)

- ACL cung cấp một cơ chế cấp phép bổ sung, linh hoạt cho các hệ thống tệp, nó được thiết kế để hỗ trợ quyền với tệp UNIX, Nó cho phép bạn cấp quyền cho bất kì người dùng hoặc nhóm nào đối với bất kì disk resources nào
- Mục đích của việc sử dụng ACL:
  - Hãy nghĩ về một tình huống trong đó một người dùng cụ thể không là một thành viên trong nhóm mà bạn tạo ra, vì vậy nếu bạn tạo ra người dùng ABC và đó không phải là thành viên của group root, nhưng bạn vẫn muốn cấp cho một số quyền đọc hoặc ghi => Làm thế nào mà bạn có thể làm điều này mà không đặt người dùng đó thành thành viên của nhóm? => ACL giúp chúng ta làm điều đó
- Chúng ta có thể làm điều này bằng cách thay đổi quyền của nhóm `other`, tuy nhiên chúng ta chỉ muốn chỉ định quyền này cho một người duy nhất, việc thay đổi quyền của nhóm `other` làm cho tất cả những người dùng khác có được quyền này => Điều đó là không khả thi
- ACL được sử dụng để xác định quyền truy cập tùy ý chi tiết hơn cho các tệp và thư mục
- Các lệnh được sử dụng để gán và loại bỏ quyền ACL là: (Các lệnh này cung cấp thông tin về các quyền hiện có của tệp và cho phép bạn thiết lập theo cách mà bạn muốn)

  - `setfacl`
  - `getfacl`

- List of commands for setting up ACL:

  1. To add permision for user

  - `setfacl -m u:user:rwx /path/to/file`

  2. To add permision for group

  - `setfacl -m g:group:rw /path/to/file`

  3. To allow all files or directories to inherit ACL, entries from the directory it is within

  - `setfacl -Rm "entry" /path/to/dir`

  4. To remove a specify entry

  - `setfacl -x u:user /path/to/file` (Chỉ dành cho một người dùng cụ thể)

  5. To remove all entries

  - `setfacl -b path/to/file` (For all users)

- Note:

  - Mỗi khi gán quyền `ACL` cho một file/directory, nó sẽ thêm một dấu `+` ở cuối quyền
  - Thiết lập với quyền `w` với `ACL` không cho phép bạn xóa một tệp

- Ví dụ:
- Ta có file sau, ta muốn chỉ định duy nhất một người dùng có quyền `rw`
  ![acl](./imgs/acl.jpg)

- Làm như sau:
  ![acl_rs](./imgs/acl_result.jpg)

- Sử dụng gạch thứ 4
  ![acl_rs3](./imgs/acl3.jpg)

- Muốn set toàn bộ quyền về như cũ thì sử dụng gạch đầu dòng thứ 5
