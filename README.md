# CodeBlocksOpenGLSetup
یک راهنما برای نصب و پیکر بندی کد بلاکس و opengl 

سلام! برای نصب و پیکربندی opengl در محیط کدبلاکس ابتدا باید نرم افزار کد بلاکس را به همراه کامپایلر دانلود کنید.
لینک دانلود نرم افزار: 

http://www.codeblocks.org/downloads/binaries/

یا:

https://sourceforge.net/projects/codeblocks/files/Binaries/

من از لینک زیر برای دانلود استفاده کردم:

https://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-setup.exe/download

دقت کنید که در هر صورت آخرین نسخه و نسخه به همراه کامپایلر mingw را دانلود کنید (codeblocks-20.03mingw-setup.exe)

-----------------

مرحله بعدی نصب کد بلاکس است، که میتوانید با کلیک روی فایل نصب دانلود شده این کار را انجام دهید.

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/3309b471-b16f-4082-bd52-e9e7c8837749)


![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/96eced3f-7bc7-40ba-a9ff-2b383e15ddb8)

در این قسمت تمام پلاگین های کد بلاکس را باید انتخاب کنید، اگر به صورت پیشرفض روی این گزینه است دست نخورده به مرحله بعدی بروید.

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/adbe6063-99e7-49a9-bf73-e8bd3fd85da4)

در این مرحله می توانید مسیر نصب کد بلاکس را انتخاب کنید یا مسیر پیش فرض را تغییر ندهید، لطفا مسیر نصب را به خاطر بسپارید.

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/f94adbf2-e2f0-4d15-8ecc-61562a251dcb)

با کلیک بر روی گزینه install فرایند نصب آغاز می شود، منتظر اتمام نصب برنامه بمانید.

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/79ab172a-dac0-40fb-9f2b-7d4cfc8cf5bb)

نصب کد بلاکس به پایان رسید، از این مرحله به بعد در مورد پیکربندی opengl صحبت خواهیم کرد، در صورت تمایل و بررسی درست پیش رفتن مراحل نصب میتوانید کد بلاکس را یک بار اجرا کنید. 

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/5c9008e9-86ea-4f96-99bc-b9e6538d6248)



--------------------------

کتابخانه opengl به صورت پیشفرض روی تمام سیستم عامل های ویندوز نصب است، اما برای توسعه نرم افزار با کمک این کتابخانه ما نیاز به برخی کتابخانه های جانبی داریم، یکی از این کتابخانه ها freeglut است.

فایل های freeglut را از لینک زیر دریافت کنید:

[FreeGLUT](https://github.com/Haj4li/CodeBlocksOpenGLSetup/blob/main/freeglut.rar)

برای ساده تر شدن کار میتوانید فایل هارو مستقیما در پوشه نصب کدبلاکس استخراج کنید:


![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/882cb46c-7251-4f16-a755-8fe2b9a4fcc7)

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/b0de8463-c216-4f78-8de8-d8dd3df9daec)


یاهم که به صورت دستی هر فایل رو در پوشه مناسب خودش قرار بدید(فایل ها به صورت آماده در مسیر های مورد نظر توی فایل freeglut.rar قرار دارند)

در نهایت فایل freeglut.dll رو از لینک زیر دریافت کنید:
[freeglut.dll](https://github.com/Haj4li/CodeBlocksOpenGLSetup/blob/main/freeglut.dll)

و توی مسیر های زیر کپی کنید:

C:\Windows
C:\Windows\System
C:\Windows\System32


حالا کدبلاکس رو باز کنید و از قسمت New Project این مورد رو انتخاب کنید:

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/30aa81b2-c6a4-4fae-bb6c-d7f45585ddb7)

در این قسمت یک نام و یک مسیر برای پروژه انتخاب کنید:

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/5b835d16-2ec5-4c8d-8316-a1d0da741ca2)


در این قسمت اگر به مشکل خوردید از دکمه کنار مسیر مورد نظر برای کامپایلر رو انتخاب کنید: (تنها اگر به مشکل برخورد کردید این کار رو بکنید، کافیه کلید next رو بزنید و اگر خطا نداد ادامه بدید)

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/217d2745-5db3-4077-817c-6171f853a9ee)

مسیر مورد نیاز برای کامپایلر به این شکل هست :

C:\Program Files\CodeBlocks\MinGW\x86_64-w64-mingw32

بنا بر تنظیمات شما ممکن است مسیر نصب متفاوت باشد!


حالا از قسمت بالا روی دکمه Build & Run کلیک کنید.

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/3f6a4172-efb7-4e68-b9fb-69e1082cbec3)


نتیجه کار به این شکل خواهد بود:

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/fdae7343-09d6-49a6-9a98-f98030746211)

در صورتی که اتفاقی نیوفتاد ممکن است مسیر کامپایلر اصلی کدبلاکس مشخص نشده باشد، برای مشخص کردن این مسیر کافیه از قسمت تنظیمات بخش کامپایلر اقدام کنید: 

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/a310e7f4-61ac-47d8-94e1-bbf38b785750)

![image](https://github.com/Haj4li/CodeBlocksOpenGLSetup/assets/48994331/dfd6897f-acbe-4568-9bdb-234c061db95a)

اگر کامپایلر کدبلاکس تنها کامپایلر نصب شده روی سیستم شماست میتونید از دکمه Auto Detect هم استفاده کنید.

در نهایت دکمه OK رو بزنید و برنامه باید بدون مشکل اجرا بشه.

تهیه شده توسط علی نخعی
آیدی تلگرام: https://t.me/CodePerson
موفق باشید 💜



