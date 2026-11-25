# Challenge accepted: the problems Lamoda engineers solve

**Jane Goleva (@cheaffa)**  
Originally published on 19 May 2020 in the Lamoda Tech corporate blog on Habr.

[Read the original Russian article](https://habr.com/ru/companies/lamoda/articles/501716/)

*English translation of the original interview-based article. The interviewees' accounts, roles and technical context reflect the time of publication.*

---

### Editorial context

By 2020, the engineering community already knew quite a lot about Lamoda and its technology. But the business had evolved, and many of the engineering challenges we'd previously talked about had been solved. So what was next?

What made these new challenges interesting wasn't necessarily the hardcore technical stuff. It was the sheer complexity of the business itself: physical goods, warehouses, logistics, payments and real customers. How do you build software that makes all of this work together?

To tell that story, I developed the editorial concept, selected six experts, commissioned the interviews and brought their individual perspectives together into a single narrative.

The article was also meant to be a starting point for exploring our wider body of work. We wove links to earlier articles and talks into the stories wherever they naturally fitted, closing with a broader conference talk on engineering challenges in e-commerce.

### Results

The article became one of our cornerstone editorial pieces. We regularly linked to it in job postings, and engineers often mentioned reading it while preparing for interviews with Lamoda.

**Reach:** 4,200 views on [Habr](https://habr.com/ru/companies/lamoda/articles/501716/).

---

People come to e-commerce from all sorts of fields: fintech, software development and telecommunications. And they soon discover that things are far from boring here, too. We spoke to people from different parts of our IT department about unexpected professional challenges, the problems they work on and opportunities for growth.

![Original article illustration](https://habrastorage.org/r/w1560/webt/oi/jc/uu/oijcuu2kegluanivtquvk6g6us0.png)

## The thrill of engineering and fast feedback

<img src="https://habrastorage.org/r/w1560/webt/on/oi/d5/onoid51yuvuxct8ojoe6vrwx11w.jpeg" alt="Alexander Afenov — original photograph" width="200">

My name is Alexander Afenov. I head development for the commercial department, and I call myself a team lead of team leads. Before joining Lamoda, I worked in outsourced software development for mobile network operators. In four and a half years at Lamoda, I went from a mid-level developer to heading a development area.

**How did that growth happen?**

Our onboarding process is designed so that developers ship new features (and sometimes entire projects) to production during their probationary period.

Goals and tasks during probation are tailored to the new employee's level and individual circumstances. Even after the first three months, we continue teaching them and immersing them in the business and the specifics of our IT systems. We use automated tests to show how business processes flow, share the basics of our internal development culture through code reviews, and explain which parts of projects can be refactored and which will soon be moved into new services. Nevertheless, a truly deep understanding of how the system works doesn't come immediately.

In my opinion, you need to work here for about a year to develop that understanding.

To help engineers get up to speed, get their hands dirty and share knowledge across the team, we have on-call rotations ([I gave a full talk about this at TeamLeadConf](https://habr.com/ru/company/lamoda/blog/468657/)). For a week, one engineer deals with incoming issues relating to the system. When the priority tasks run out, they pick up tasks from the technical backlog.

For the brave, the reckless and those who want to support the system, we also have overnight on-call shifts. It's an interesting challenge for anyone who wants to develop their skills quickly. At night, you can really get up close and personal with the system, because some business processes take place strictly outside normal working hours.

For example, I sit there programming something during the day, releases go out and everything is fine. Then I go on duty, and late in the evening I see that goods are being received at one of our transit warehouses and an error in the IT system is tearing a business process to pieces. In practice, this means several sales representatives are sitting at a warehouse, unable to finish their working day and go home. At that moment, you can — and should — get hands-on with the business process, fix the problem, help people and figure out how it all works.

At other times, you simply don't encounter this sort of thing, and you might not encounter it for years. Throw in the extra pay and the adrenaline, and it's actually pretty cool.

**What are you working on now?**

I currently have a major management challenge: bringing together and standardising all the teams working on commercial functions. We're going to tackle it in two ways: by rotating tasks among teams and by bringing in our old wolves — the system architects — who will also look after the horizontal connections within and between teams.

For each team to become autonomous, sometimes you need to develop people, give them different tasks and let them learn new technologies. PHP developers, for example, sometimes get involved in Java and Go projects. Since 2018, everyone in my area has been working with Kafka, which has become an important part of our infrastructure, a widely adopted technology and one of the most popular ways of exchanging data between systems. ([Here's a talk](https://habr.com/ru/company/oleg-bunin/blog/445424/) about how we've implemented it.)

Developers and other team members shouldn't just be building their own thing in a corner. They should also understand what the neighbouring teams are doing. We want them to get hands-on experience with other teams' systems. In the long run, it makes teams more independent and lets them work across whichever systems are needed to solve a business problem.

**What surprised you when you came into e-commerce?**

At Lamoda, what came to the fore for me was communication with customers, and how the actions of IT affect people's lives and their actual experience. Here, we're interested less in short-term gains than in long-term loyalty. We want people to use our product regularly. The main thing that makes development here different is the need to respond to problems quickly. For instance, something breaks on our side and there's a real person standing at a pickup point, unable to pay for their coat.

We see when our mistakes cause problems for people in the warehouse and in delivery. And we share our customers' excitement, too — for example, when we completely redesigned payment processing and launched the gift cards everyone had been waiting for.

## Rebuilding everything from scratch

<img src="https://habrastorage.org/r/w1560/webt/py/2k/lr/py2klrlq0inezj2_dlu_rpi9yhw.jpeg" alt="Alexandra Kamzeeva — original photograph" width="200">

I'm Alexandra Kamzeeva. I used to work in systems integration, and three and a half years ago I became a systems analyst at Lamoda.

**Why does a development team need an analyst?**

That's the first question many developers ask. But once they've worked with a good systems analyst, they get a taste for it and start asking for analysts to be brought into every project. Developers don't necessarily know the ins and outs of every business process, and without that knowledge it's difficult to build a solution that fits the business perfectly. An analyst is there to carry out a detailed investigation before development begins, ask questions, get answers and account for everything in the specification.

That keeps the number of iterations and errors to a minimum, saving developers time and frustration.

**What was your first serious challenge in e-commerce?**

My biggest and most interesting challenge so far has been a new system for automating the process of refunding money to a customer's card. It was one of the weakest points in our system, which had been written back when Lamoda was still a startup. It involved a lot of manual operations, increasing the risk of errors. We started thinking about how to change the system, and then we got a little kick from the government: Russian Federal Law No. 54-FZ was passed.

Under that law, all companies offering goods and services to individuals must transmit sales data to the tax authorities via a fiscal data operator, specifying exactly what was sold, when and through which intermediaries. All of that is printed on the receipt. It works the other way around, too: as well as reporting what was sold, you have to report what money was refunded for and print a receipt.

We divided the project into seven phases. This meant we could focus on a specific feature in each phase and release them to production one after another. In the end, we automated everything we could in the refund process, so that correct data could be submitted to the tax authorities without unnecessary manual corrections.

## More than a coder: a co-creator

<img src="https://habrastorage.org/r/w1560/webt/1-/v2/ys/1-v2yseemec3gslq97vcxhyrjz4.jpeg" alt="Igor Grammatchikov — original photograph" width="200">

My name is Igor Grammatchikov, and I joined the online store development team a year and a half ago, coming from a large company specialising in business process automation. I'm now a frontend developer working on the Lamoda website. Before that, I developed interfaces for internal automation systems at large retail chains. It was just software development for some abstract customer.

Now I feel that this is my product, and I want not only the users to like it but also to like it myself. I regularly shop on Lamoda, as do all my colleagues and friends, and sometimes we spot problems ourselves that we can fix.

The tasks vary. For instance, I had to build a dropdown shopping cart on the website that would work both on pages already rewritten in the new Vue.js framework and on those still running the old Backbone.js and jQuery code. I spent more than a month working away at that task and ran into a lot of problems. But after a great deal of thinking it through together, we came up with a method, refined it, and now everyone can use it easily.

We don't just deal with problems that affect lots of people. Recently, we were tackling a very specific bug that only affected one user. At my previous jobs, we'd have come up with a polite excuse and moved on. Here we fix anything that isn't working the way it should.

This is the first time I've really worked in an Agile environment: we have daily stand-ups and lots of meetings with the manager and designer. A developer isn't just someone who executes tasks; they're a co-creator. People genuinely listen to my opinion in meetings, rather than just expecting me to take notes and go off and code. If I say something isn't going to work and suggest redoing it, the team starts thinking about how to do it better.

## Growing as an engineer through user feedback and code reviews

<img src="https://habrastorage.org/r/w1560/webt/fy/tq/x0/fytqx0kutg_qawv5jedcvag4bv0.jpeg" alt="Viktor Barsukov — original photograph" width="200">

I'm Viktor Barsukov, a developer in one of the warehouse automation teams. I've been working in the team for six months; before that, I worked in fintech and at a fiscal data operator. We're constantly talking to warehouse employees, the users of our systems, who give us useful feedback. There was nothing like that in fintech — we wrote the code and forgot about it. Then someone else tested it, and someone else deployed it.

Talking to our actual users every day, combined with rigorous code reviews, really motivates me to keep developing my skills. We practically have a slogan: guys, review each other's code! Before a task can move forward, it has to be reviewed by two engineers and one of the team leads. It's a great practice: in addition to stand-ups, reviews and retrospectives, you get to see the code changing in real time. That's how you develop an overall picture of the development work.

**What business processes do you automate?**

There are all sorts of tasks involved in warehouse automation: handling incoming goods, placing items on shelves, managing sorting, packing and order picking. It also involves interacting with warehouse employees, from calculating KPIs to choosing the optimal routes between shelves.

Sometimes we have small tasks; sometimes it's more like detective work, when you look through the logs to find out what went wrong, where and when. It's fascinating. Right now we're tackling a major task: migrating the Android application from Java to Kotlin, which will give us more possibilities in terms of development.

**What's the biggest business challenge you're tackling right now?**

The warehouse development team is currently implementing another major project, Warehouse 2. Previously, we worked with one physical warehouse. Adding a second one will require significant changes to all our business processes, and therefore to the systems that automate them. Initially, the second warehouse will be similar to the first ([we wrote a separate article about the first one](https://habr.com/ru/company/lamoda/blog/432394/)). Eventually, however, the second warehouse will be larger, and its business processes will have a higher and more modern level of automation.

One of the tasks is synchronising data between the future systems so that their data doesn't get duplicated or conflict.

I was configuring the data exchange bus built with Apache Camel. This was actually my first experience with Camel, so the task was not only to adapt the routes to accommodate the second warehouse but also to get to grips with the framework itself.

## Axapta in three months

<img src="https://habrastorage.org/r/w1560/webt/ff/eu/dk/ffeudkjgkvgjkadpxzrstcundii.jpeg" alt="Elizaveta Naumenko — original photograph" width="200">

I'm Elizaveta Naumenko, and for a year now I've been working as a support consultant in the support and development team of the ERP (Enterprise Resource Planning) department. Our department automates all financial reporting, accounting and inventory movements.

The system is built primarily on Axapta (Microsoft Dynamics AX), with a little 1C. Axapta interacts with dozens of our internal systems because it's the source of master data for purchasing and finance. Our other platforms are constantly accessing Axapta as well, so there's a lot of integration and support work here.

My biggest challenge was getting up to speed quickly. I had to learn and develop very fast. During my three-month probationary period, I learned how our processes work in Axapta. I felt as though I was getting another university degree ([you can read more here about how we share knowledge within the team](https://habr.com/ru/company/oleg-bunin/blog/421687/)).

**What's the most difficult part of your work?**

The hardest part is urgent support tasks. Under our SLA, we literally have only a few hours to resolve critical errors. There are also complex tasks that can drag on because they require deeper analysis. If I can't manage on my own, I can go to my manager and ask for help. I can even go straight to the head of ERP development and say that I don't know what to do or how to solve the problem.

In fact, that's encouraged, because we all understand that if an error isn't fixed in time, it can bring a business process to a standstill. That's critical for the team, because it's the company's money at stake. If that happens, there will definitely be a retrospective review of the incident: what to do and how to prevent errors next time.

## Technology diversity: a zoo, but a petting zoo

<img src="https://habrastorage.org/r/w1560/webt/7j/t5/rw/7jt5rwwqqqbazy3gdipjpdrm1wk.jpeg" alt="Timur Nurutdinov — original photograph" width="200">

I'm Timur Nurutdinov, and I'm responsible for all software development at Lamoda. From my perspective, we're a large e-commerce business with an enormous number of processes. Lots of people work here, and even more use our services. To keep all of this working, we use almost every modern technology, because we have to deal with almost every IT challenge imaginable. Our [technology radar](https://habr.com/ru/company/lamoda/blog/428411/) is a real zoo, but it's a petting zoo — you can try everything out.

Of course, we do less in-house development than the tech giants, but our problems and projects are no simpler than theirs.

**What do you personally enjoy about your work?**

Lamoda's IT department has many users: shoppers, business customers and company employees. For me, there's a particular satisfaction in seeing the results of my work when we solve their problems quickly. I gave [an entire talk on this at HighLoad++ 2019](https://www.youtube.com/watch?v=hnKkfp4U9hg) (in Russian), where I described in detail what other challenges the e-commerce industry presents to engineers and why we enjoy them.


---

[Original article in Russian](https://habr.com/ru/companies/lamoda/articles/501716/)

*Original illustration and photographs are embedded from their source URLs.*
