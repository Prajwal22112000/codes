import React from "react";
import { FaTelegramPlane } from "react-icons/fa";
import { AiFillMail, AiOutlineMobile } from "react-icons/ai";
import "./Footer.scss";
const Footer = () => {
  return (
    <section className="footer-wrapper">
      <div className="flexCenter footer-content">
        <div className="footer-left">
          <h1 className="footer-h1">About</h1>
          <p>
            NEGISTORE is developed and organized by prjawal negi the store is
            made such that suer can have access to different stuffs they want
          </p>
        </div>
        <div className=" footer-center">
          <h1 className="footer-h1">Contact</h1>
          <div className="contact-items">
            <FaTelegramPlane />
            <p>
              10 Civil Lines, Dixit Niwas, Near Petrol Pump Mathura,
              UttarPradesh (21001)
            </p>
          </div>
          <div className="contact-items">
            <AiOutlineMobile />
            <p>Phone: +91 904593145</p>
          </div>
          <div className="contact-items">
            <AiFillMail />
            <p>Email:negiprajwal22@gmail.com</p>
          </div>
        </div>
        <div className="flexStart footer-right">
          <div className="footer-categories">
            <h1 className="footer-h1">Categories</h1>
            <button>Headphones</button>
            <button>Smart Watches</button>
            <button>Bluetooth Speakers</button>
            <button>Wireless Earbuds</button>
            <button>Projectors</button>
            <button>Home Theaters</button>
          </div>
          <div className="footer-pages">
            <h1 className="footer-h1">Pages</h1>
            <button>Home</button>
            <button>About</button>
            <button>Privacy Policy</button>
            <button>Returns</button>
            <button>Contact Us</button>
          </div>
        </div>
      </div>
    </section>
  );
};

export default Footer;
