import React from "react";
import {
  FaFacebookSquare,
  FaInstagramSquare,
  FaTwitterSquare,
  FaLinkedin,
} from "react-icons/fa";
import "./Newsletter.scss";
const Newsletter = () => {
  return (
    <div className="flexColCenter newsletterwrapper">
    {/* <img src={NewsletterBG} alt/> */}
      <div className="flexColCenter newsletter-content">
        <span className="newsletterHeader" >NEWSLETTER</span>
        <h1 >SIGN UP FOR LATEST UPDATE AND OFFEERS</h1>
        <form className="form">
          <input type="text" placeholder="Email Address"/>
          <input type="button" value="Subscribe"/>
        </form>
        <span className="newsletterPP">Will be used in accordance with our Pricay Policy</span>
        <div className="flexCenter icons">
          <FaLinkedin/>
          <FaFacebookSquare/>
          <FaInstagramSquare/>
          <FaTwitterSquare/>
        </div>
      </div>
    </div>
  );
};

export default Newsletter;
