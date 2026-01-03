

## -== Review Video ==-

![Thumbnail Video](https://github.com/user-attachments/assets/2318a1d9-8a7e-42ca-990f-9506a41e49f9)

### The FASTEST Introduction to Reinforcement Learning on the Internet

**“The FASTEST Introduction to Reinforcement Learning on the Internet”** merupakan sebuah pengantar singkat namun padat mengenai **Reinforcement Learning (RL)**, salah satu cabang *machine learning* yang berfokus pada bagaimana sebuah agen (*agent*) belajar mengambil keputusan terbaik melalui interaksi langsung dengan lingkungan (*environment*).

Dalam Reinforcement Learning, agen menerima umpan balik berupa **reward** atau **punishment** atas setiap tindakan (*action*) yang diambil pada suatu kondisi (*state*). Tujuan utama agen adalah memaksimalkan total reward jangka panjang.

Video ini menjelaskan konsep dasar RL, meliputi hubungan antara:

- **Agent**
- **State**
- **Action**
- **Reward**

serta memperkenalkan **Markov Decision Process (MDP)** sebagai kerangka matematis utama dalam permasalahan Reinforcement Learning.

Pembahasan kemudian dilanjutkan dengan metode pembelajaran seperti:

- **Monte Carlo Learning**
- **Temporal Difference (TD) Learning**

yang menunjukkan bagaimana agen dapat belajar dari pengalaman secara bertahap.

Selanjutnya, video membahas algoritma yang lebih lanjut, antara lain:

- **Q-Learning**
- **Deep Q-Networks (DQN)**, yang menggabungkan *deep learning* dengan Reinforcement Learning untuk menangani ruang keadaan yang besar.
- **Policy Gradient**, yaitu metode yang mempelajari kebijakan (*policy*) secara langsung tanpa menghitung fungsi nilai (*value function*).

Video ini juga menyinggung hubungan Reinforcement Learning dengan **neuroscience**, keterbatasan pendekatan RL saat ini, serta arah pengembangannya di masa depan.

**Kesimpulan:**  
Video ini memberikan gambaran menyeluruh dan cepat mengenai konsep inti Reinforcement Learning, sehingga sangat cocok sebagai **pengantar awal bagi pemula seperti saya** yang ingin memahami AI berbasis pengambilan keputusan.

---

## Review Book

![Cover Buku](https://github.com/user-attachments/assets/a9532f14-eccd-4160-9542-e942e9a6b29d)

## Introduction to Humanoid Robotics

## Chapter 1: Introduction (Konsep & Motivasi)

Bab ini membahas alasan utama mengapa **humanoid robot** dikembangkan dan apa yang membedakannya dari jenis robot lainnya. Humanoid robot didefinisikan sebagai robot yang memiliki bentuk menyerupai manusia, khususnya memiliki kepala, badan, dua tangan, dan dua kaki.

Penulis menekankan bahwa meskipun tidak semua tugas membutuhkan bentuk humanoid, desain ini menjadi sangat relevan karena **lingkungan dunia nyata sepenuhnya dirancang untuk manusia**.

Tiga keunggulan utama humanoid robot dijelaskan secara mendalam:

- Humanoid robot dapat bekerja di lingkungan manusia tanpa perlu modifikasi (seperti tangga, pintu, dan lorong).
- Humanoid robot dapat menggunakan alat-alat yang dirancang untuk manusia secara langsung.
- Bentuk menyerupai manusia membuat robot lebih mudah diterima secara sosial dan emosional.

Bab ini juga mengulas sejarah perkembangan humanoid robot, dimulai dari **WABOT-1 dan WABOT-2** (Waseda University) hingga perkembangan besar oleh Honda melalui **P2, P3, dan ASIMO**. Dijelaskan bahwa keberhasilan Honda tidak hanya bergantung pada algoritma, tetapi juga pada desain mekanik, aktuator presisi, sensor gaya, giroskop, dan akselerometer.

Bab ini ditutup dengan penjelasan tujuan buku, yaitu memberikan fondasi teori **kinematika, dinamika, kontrol, dan simulasi** yang diperlukan untuk mengembangkan humanoid robot yang stabil dan mampu beroperasi di dunia nyata.

---

## Chapter 2: Kinematics

Bab ini merupakan **fondasi matematis utama dalam humanoid robotics**. Kinematika membahas hubungan antara **gerakan sendi** dengan **posisi dan orientasi bagian tubuh robot**, tanpa memperhitungkan gaya yang bekerja.

Pembahasan diawali dengan sistem koordinat:

- **World Coordinate System**
- **Local Coordinate System**

Dijelaskan bagaimana posisi dan orientasi suatu link dihitung menggunakan **homogeneous transformation matrix**, yang menggabungkan rotasi dan translasi dalam satu matriks.

Topik penting yang dibahas dalam bab ini meliputi:

- Representasi rotasi 3D  
- Sudut **roll, pitch, dan yaw**  
- Matriks rotasi dan inversnya  
- Kecepatan sudut (*angular velocity*)  
- Hubungan turunan matriks rotasi dengan kecepatan sudut  

### Forward Kinematics
Menentukan posisi dan orientasi end-effector (tangan atau kaki) berdasarkan sudut semua sendi yang diketahui.

### Inverse Kinematics
Menentukan sudut sendi yang diperlukan agar end-effector mencapai posisi dan orientasi tertentu. Masalah ini bersifat **nonlinear** dan umumnya diselesaikan menggunakan metode numerik.

### Jacobian
Jacobian menghubungkan kecepatan sendi dengan kecepatan linear dan sudut end-effector. Konsep ini sangat penting untuk:
- Kontrol gerakan robot  
- Menghindari singularitas  
- Perhitungan kecepatan dan gaya  

---

## Chapter 3: ZMP and Dynamics

Bab ini membahas **keseimbangan dan stabilitas humanoid robot saat bergerak**. Berbeda dengan robot industri yang dipasang permanen, humanoid robot harus menopang tubuhnya hanya dengan dua kaki, bahkan satu kaki saat berjalan.

Pada kondisi statis, keseimbangan dapat ditentukan dari posisi **Center of Mass (CoM)** terhadap kaki penopang. Namun, pada kondisi dinamis, gerakan menghasilkan:

- Gaya inersia  
- Momen gaya  
- Gaya reaksi tanah  

Untuk itu diperkenalkan konsep **Zero Moment Point (ZMP)** sebagai kriteria stabilitas dinamis.

### Tujuan Bab
- Memperkenalkan ZMP sebagai kriteria stabilitas
- Menjelaskan hubungan antara gerak robot dan gaya reaksi tanah
- Membahas momentum dan angular momentum
- Menjelaskan perhitungan dan pengukuran ZMP
- Menjelaskan keterbatasan ZMP

### Ruang Lingkup
- Konsep dasar ZMP
- Analisis ZMP 2D dan 3D
- Pengukuran ZMP menggunakan sensor kaki
- Dinamika humanoid robot
- Perhitungan dan interpretasi ZMP

 **Inti Bab:**  
*Kapan dan mengapa humanoid robot dapat dikatakan stabil saat bergerak?*

---

## Chapter 4: Biped Walking

Bab ini membahas bagaimana humanoid robot dapat **berjalan secara stabil**. Biped walking merupakan tantangan besar karena:

- Support polygon terus berubah
- Adanya fase **single support** dan **double support**
- Keseimbangan harus dijaga sambil bergerak

Bab ini menekankan bahwa berjalan bukan sekadar menggerakkan kaki, tetapi juga mengendalikan **CoM**, menjaga **ZMP**, dan mengoordinasikan seluruh tubuh.

### Tujuan Bab
- Memperkenalkan model sederhana walking
- Menjelaskan **Linear Inverted Pendulum Model (LIPM)**
- Menjelaskan walking pattern generation
- Menghubungkan ZMP dengan walking
- Memperkenalkan preview control dan stabilizer

 **Inti Bab:**  
*Bagaimana humanoid robot dapat berjalan tanpa jatuh?*

---

## Chapter 5: Generation of Whole Body Motion

Bab ini membahas gerakan kompleks humanoid robot selain berjalan, seperti:

- Mengangkat benda
- Membungkuk
- Bangun dari lantai
- Menjaga keseimbangan saat terdorong
- Jatuh dengan aman

### Tujuan Bab
- Menghasilkan gerakan seluruh tubuh
- Memisahkan rough motion dan dynamically stable motion
- Menjelaskan dynamics filter dan auto balancer
- Membahas teleoperation dan falling control

**Inti Bab:**  
*Bagaimana humanoid robot melakukan tugas kompleks tanpa kehilangan keseimbangan?*

---

## Chapter 6: Dynamic Simulation

Bab ini membahas simulasi dinamika humanoid robot sebagai alat penting sebelum implementasi di dunia nyata.

### Tujuan Bab
- Menjelaskan dinamika benda tegar
- Memperkenalkan formulasi Newton–Euler
- Menjelaskan inverse dan forward dynamics
- Memperkenalkan **Featherstone’s Method**

**Inti Bab:**  
*Bagaimana memodelkan dan mensimulasikan gerakan humanoid robot secara realistis?*
